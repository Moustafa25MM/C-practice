#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <conio.h>

int line ;
int page;
int postion;
char data[3][20] = {{"Display"},{"Read"},{"Exit"}};

void SetColor(int ForgC)
{
     WORD wColor;
     //This handle is needed to get the current background attribute

     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     CONSOLE_SCREEN_BUFFER_INFO csbi;
     //csbi is used for wAttributes word

     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {
          //To mask out all but the background attribute, and to add the color
          wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
          SetConsoleTextAttribute(hStdOut, wColor);
     }
     return;
}

void gotoxy(int x , int y){
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);

}
void menu(){
    int page = 0;
    postion = 1;
    int keyPressed ;
    system("cls");
    while(keyPressed != " "){
        system("cls");
        gotoxy(55,55);
        line = 1;
        moveArrow(1,postion);
        //printf("\033[0;31m {Display} \033[0m\n");
        //printf("\033[0;34m {Display} \034[0m\n");
        //printf("Display\n");
        line = 2;
        gotoxy(55,65);
        moveArrow(2,postion);
        //printf("Read\n");
        line = 3;
        gotoxy(55,75);
        moveArrow(3,postion);
        //printf("Exit\n");
        keyPressed = getch();

        if(keyPressed == 80){
            if(postion == 3 ){
                postion =1;
                line =1;
            }
            else{
                postion ++;
            }
        }
        else if(keyPressed == 72){
            if(postion == 1){
                line = 3;
                postion = 3;
            }
            else {
                postion --;
            }
        }
        else{
            postion = postion;
        }
        if(postion == 1 && keyPressed == 13 ){
            system("cls");
            //gotoxy(55,55);
            printf("\033[31mthe user selected display\033[0m");
            backSpace();
        }
        else if (postion == 2 && keyPressed == 13){
            system("cls");
            //gotoxy();
            printf("\033[31mthe user selected to read\033[0m");
            backSpace();
        }
        else if(postion == 3 && keyPressed == 13){
            system("cls");
            exit(0);
        }

    }

}

void moveArrow(int realPosition , int arrowPostion){
    if(realPosition == arrowPostion){
        printf("line :%d  ",line);
        gotoxy(55,55);
            //printf("line : %d", line);
        for(int i = 0 ; i < 3 ; i ++){
            if(line == i + 1){
                printf("\033[0;31m {%s} \033[0m",data[i] );
            }
            else{
                printf(" %s", data[i]);
            }
        }
    }



}
void backSpace(){
    if(getch() == 8){
        page = 0;
    }
}


int main()
{

    menu();


    return 0;
}
