#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <dos.h>

void gotoxy(int x , int y ){
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);

}

int line = 0;
int inPage = 0;
char items[3][10] = {{"Display"},{"Read"},{"Exit"}};

typedef struct Employee {
    int ID;
    char name[20];
    int salary;
    int bonus;
    int deduction ;
}employee;
employee AddNewEmployee();
void DisplayEmployee(struct Employee employeees[5]);


int main()
{

    menu();
    char n = getch();
    do
    {

        if(n == -32)
        {
            switch (getch())
            {
            case 72: // up
                if(line == 0)
                {
                    line = 3;
                }
                else if(line == 1)
                {
                    line = 3;
                }
                else
                {
                    line--;
                }
                menu();
                break;
            case 80: // down
                if(line == 0)
                {
                    line = 1;
                }
                else if(line == 3)
                {
                    line = 1;
                }
                else
                {
                    line++;
                }
                menu();
                break;
            case 13 : // enter
                if(line != 0)
                {
                    switch (line)
                    {
                    case 1: // home
                        inPage = 1;
                        system("cls");
                        printf("second : This page talk about food");
                        printf("first : Sea food");
                        printf("first : fast food");
                        printf("first : go to back click backspace");

                        break;
                    case 2: // contact
                        inPage = 2;
                        system("cls");
                        printf("second : This page talk about drinks");
                        printf("second : Coca Cola");
                        printf("second : Pepsi");
                        printf("second : go to back click backspace");
                        break;
                    case 3: // exit
                        inPage = 3;
                        exit(0);
                        break;
                    }
                }
                break;
            case 8 :
                menu();
                break;
            }
        }
    }
    while(n != 13 || inPage != 3);
    backspace();


    return 0;
}

void menu()
{
    int i;
    system("cls");
    printf("line : %d\n", line);
    for(i=0; i<3; i++)
    {
        if(line == i+1)
        {
            printf("\033[0;31m {%s} \033[0m\n", items[i]);
        }
        else
        {
            printf("%s\n", items[i]);
        }
    }
}

void backspace()
{
    if(getch() == 8 );
    {
        if(inPage == 0)
        {
            exit(0);
        }
        else
        {
            inPage = 0;
        }
    }
}
