#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <dos.h>


/*
    4- Employee with functions and Highlight Menu: Menu of Array_Of_Struct

*/

#define EMPLOYEE_SIZE 100

void gotoxy(int x , int y ){
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);

}

int line = 0;
int inPage = 0;
char items[3][10] = {{"Read"},{"Add"},{"Exit"}};

typedef struct Employee {
    int ID;
    char name[20];
    int salary;
    int bonus;
    int deduction ;
}employee;
employee AddNewEmployee();
void DisplayEmployee(employee employeees);



int main()
{

    employee employeees[EMPLOYEE_SIZE];

//     gotoxy(55,55);
//     gotoxy(55,65);
//    gotoxy(55,75);
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
                    static int count = 0;
                    static int i = 0;
                    case 1: // home
                        inPage = 1;
                        system("cls");
                        printf("Display");
                        for( i = 0 ; i< EMPLOYEE_SIZE && i < count   ; i++){
                            DisplayEmployee(employeees[i]);
                        }

                        break;
                    case 2: // contact
                        inPage = 2;
                        system("cls");
                        printf("Add new employee\n");

                        for( i = 0 ;i< EMPLOYEE_SIZE && getch() != 8; i++ ){
                            employeees[i] = AddNewEmployee();
                            count ++;
                            printf("%d = count",count);
                        }
                        inPage = 0;
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
//     gotoxy(55,55);
//     gotoxy(55,65);
//    gotoxy(55,75);
    printf("line : %d\n", line);
//    gotoxy(55,55);
//    gotoxy(55,65);
//    gotoxy(55,75);
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

employee AddNewEmployee(){
    employee employeees;
    printf(" enter your ID : \n");
    scanf("%d",&employeees.ID);

    printf("enter your Name : \n");
    scanf("%s",employeees.name);

    printf("enter your salary : \n");
    scanf("%d" , &employeees.salary);

    printf("enter your bonus : \n");
    scanf("%d" , &employeees.bonus);

    printf("enter your deduction : \n");
    scanf("%d",&employeees.deduction);

        return employeees;
    }

void DisplayEmployee(employee employeees){
    int sum;

        printf("Emoloyee id = %d \n" , employeees.ID);
        printf("Emoloyee name = %s \n" ,employeees.name);
        sum  = (employeees.salary + employeees.bonus - employeees.deduction) ;
        printf("Emoloyee net salary =  %d \n" , sum);

}
