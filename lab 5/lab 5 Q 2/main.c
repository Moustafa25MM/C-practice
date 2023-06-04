#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    2- C Program to take information of Array of 5 Employees, then display their data. (EmpArr_of_Struct)

*/


typedef struct Employee {
    int ID;
    char name[20];
    int salary;
    int bonus;
    int deduction ;
}employee;

int main(){
    employee employeees[5];
    int sum[5];


    for(int i = 0 ; i< 5 ;i++){

        printf("enter your ID : %d\n",i);
        scanf("%d",&employeees[i].ID);

        printf("enter your Name : %d\n",i);
        scanf("%s",employeees[i].name);

        printf("enter your salary : %d\n",i);
        scanf("%d" , &employeees[i].salary);

        printf("enter your bonus : %d\n",i);
        scanf("%d" , &employeees[i].bonus);

        printf("enter your deduction : %d\n",i);
        scanf("%d",&employeees[i].deduction);

        sum[i] = (employeees[i].salary + employeees[i].bonus - employeees[i].deduction) ;
    }

    for(int i = 0 ;i < 5 ; i++){
        printf("Emoloyee[%d]id = %d \n" , i , employeees[i].ID);
        printf("Emoloyee[%d]name = %s \n" , i , employeees[i].name);
        printf("Emoloyee[%d]net salary = %d \n" , i , sum[i]);
    }





    return 0;
}


