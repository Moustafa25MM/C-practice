#include <stdio.h>
#include <stdlib.h>
#include <dos.h>
#include <dir.h>
#include <windows.h>

int line = 0;
int page = 0;
char items [3] [10] = {{"first"}, {"second"}, {"exit"}};

void gotoxy(int x,int y){
    COORD coord;
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
void menu () {

        int i = 0;
        system("cls");
        printf("line is : %d\n", line);
        for(i = 0; i < 3 ;i++){
            if(line == i+1){
            printf(" \033[0;31m {%s} \033[0m\n", items[i]);
            } else {
            printf("%s\n", items[i]);
                    }

        }
}


int main() {

    menu();
    char x = getch();

    do {

        if(x == -32)
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

                            case 0:
                                page = 0;
                                system("cls");
                                gotoxy(50,0);

                            case 1: // first
                                page = 1;
                                system("cls");
                                gotoxy(50,5);
                                printf("second : This page talk about food");
                                printf("first : Sea food");
                                printf("first : fast food");
                                printf("first : go to back click backspace");
                                break;

                            case 2: // second
                                page = 2;
                                system("cls");
                                gotoxy(50,10);
                                printf("second : This page talk about drinks");
                                printf("second : Coca Cola");
                                printf("second : Pepsi");
                                printf("second : go to back click backspace");
                                break;

                            case 3: // exit
                                page = 3;
                                gotoxy(50,15);
                                exit(0);
                                break;

                        }
                        }

                    case 8: // backspace
                    menu();
                    break;
                    }
            }
                while(x != 13 || page != 3);
                menu();


        }
return 0;
}


