#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*1- C Program to take single Employee's information(ID, Name, Salary, Bonus, Deduction)
, and display his code, name along with his net salary. (Emp_Struct)

*/
typedef struct Employee {
    int ID;
    char name[20];
    int salary;
    int bonus;
    float deduction ;
}employee;

int main(){

    employee employee1;
    printf("enter your ID : \n");
    scanf("%d",&employee1.ID);
    printf("enter your Name : \n");
    scanf("%s",employee1.name);
    printf("enter your salary : \n");
    scanf("%d" , &employee1.salary);
    printf("enter your bonus : \n");
    scanf("%d" , &employee1.bonus);
    printf("enter your deduction : \n");
    scanf("%f",&employee1.deduction);
    float sum = employee1.salary + employee1.bonus - employee1.deduction ;

    printf("You have enter your ID of number : [%d] \n",employee1.ID);
    printf("Your name is : [%s] \n" , employee1.name);
    printf("Your net salary will be [salary + bonus -deduction] = [%f] \n",sum);



    return 0;
}


