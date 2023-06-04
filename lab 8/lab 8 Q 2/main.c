#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <dos.h>

/*

    2. Employee with Dynamic Allocation and Highlight Menu (allow the user to specify the size of array at runtime).


*/

#define EMPLOYEE_SIZE 100

void gotoxy(int x, int y )
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);

}

int line = 0;
int myPage = 0;
char items[3][10] = {{"Read"},{"Add"},{"Exit"}};

typedef struct Employee
{
    int ID;
    char name[20];
    int salary;
    int bonus;
    int deduction ;
} employee;
employee AddNewEmployee();
void DisplayEmployee(employee employeees);



int main()
{
    int numberOfEmployees;
    employee *Emp = (employee *)malloc(numberOfEmployees*sizeof(employee)); // --> Dynamic allocation

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
                        myPage = 1;
                        system("cls");
                        printf("Display");
                        for( i = 0 ; i< EMPLOYEE_SIZE && i < count   ; i++)
                        {
                            DisplayEmployee(Emp[i]);
                        }

                        break;
                    case 2: // contact
                        myPage = 2;
                        system("cls");
                        printf("Enter number of Employees : ");
                        scanf("%d",&numberOfEmployees);
                        printf("Add new employee\n");

                        for( i = 0 ; i< numberOfEmployees && getch() != 8; i++ )
                        {
                            Emp[i] = AddNewEmployee();
                            count ++;
                            printf("%d = count",count);
                        }
                        myPage = 0;
                        break;
                    case 3: // exit
                        myPage = 3;
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
    while(n != 13 || myPage != 3);
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
        if(myPage == 0)
        {
            exit(0);
        }
        else
        {
            myPage = 0;
        }
    }
}

employee AddNewEmployee()
{
    employee employeees;
    printf(" enter your ID : \n");
    scanf("%d",&employeees.ID);

    printf("enter your Name : \n");
    scanf("%s",employeees.name);

    printf("enter your salary : \n");
    scanf("%d", &employeees.salary);

    printf("enter your bonus : \n");
    scanf("%d", &employeees.bonus);

    printf("enter your deduction : \n");
    scanf("%d",&employeees.deduction);

    return employeees;
}

void DisplayEmployee(employee employeees)
{
    int sum;

    printf("Emoloyee id = %d \n", employeees.ID);
    printf("Emoloyee name = %s \n",employeees.name);
    sum  = (employeees.salary + employeees.bonus - employeees.deduction) ;
    printf("Emoloyee net salary =  %d \n", sum);

}
