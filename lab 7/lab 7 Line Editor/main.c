#include <stdio.h>
#include <stdlib.h>
#include<windows.h>


void gotoxy(int x,int y);
void delete_char(char *str, int i) ;


int main()
{
    int pos = 0;
    int x=0,y=0;
    char input;
    char text[100];
    while(input!=13)
    {
        //system("cls");
        input = getch();
        if (input==-32)
        {
            input = getch();
            if(input==71)   // home
            {
                x=0;
                gotoxy(x,y);
                //index = 0;
            }
            else if(input==79) // end
            {
                x=pos;
                gotoxy(x,y);
            }
            else if(input==77) // Right
            {
                //index++;
                x++;
                gotoxy(x,y);

            }
            else if(input==75) //left
            {
                //index--;
                x--;
                gotoxy(x,y);
            }
            else if(input==83) //delete
            {
                system("cls");
                int i=0;
                for(i=x+1; i<pos-1; i++)
                {
                    text[i]=text[i+1];
                }
                text[i]='\0';
                pos--;
                printf("%s",text);
                gotoxy(x,y);

            }
        }
        // backspace
        else if(8 == input)
        {
            system("cls");
            int i=0;
            for(i=x-1; i<pos-1; i++)
            {
                text[i]=text[i+1];
            }
            text[i]='\0';
            x--;
            pos--;
            printf("%s",text);
            gotoxy(x,y);


        }
        // enter
        else if(13 == input)
        {
            system("cls");
            printf("you entered :  %s",text);

        }
        else
        {
            printf("%c",input);
            text[x]=input;

            x++;
            if(x>pos)
            {
                pos++;
                text[pos]='\0';
            }
        }

    }
}

void gotoxy(int x,int y)
{
    COORD coord= {0,0};
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void delete_char(char *str, int i)
{
    int len = strlen(str);

    for (; i < len - 1 ; i++)
    {
        str[i] = str[i+1];
    }

    str[i] = '\0';
}
