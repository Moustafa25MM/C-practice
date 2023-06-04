#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define EMPLOYEE_SIZE 2

/*
    3- Employee with Functions (try to divide Ass#2 into 2 functions):
	struct Employee AddNewEmployee();
	void DisplayEmployee(struct Employee);
*/

typedef struct Employee {
    int ID;
    char name[20];
    int salary;
    int bonus;
    int deduction ;
}employee;
employee AddNewEmployee();
void DisplayEmployee(employee employeees);

int main(){

    employee employeees[EMPLOYEE_SIZE];
    for(int i = 0 ; i< EMPLOYEE_SIZE ; i++){
         employeees[i] = AddNewEmployee();
    }
   for(int i = 0 ; i < EMPLOYEE_SIZE ; i++ ){
        DisplayEmployee(employeees[i]);
   }



    return 0;
}


employee AddNewEmployee(){
    employee employeees;
    printf("enter your ID : \n");
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
