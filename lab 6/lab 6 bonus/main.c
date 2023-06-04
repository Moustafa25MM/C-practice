#include <stdio.h>
#include <stdlib.h>




typedef struct Customer {
    char name[15];
    int account_number;
    int balance;

}customer;

customer AddNewCustomer();
void DisplayCustomer(customer customers);
void DisplayCustomerHavingBalanceLessThan200 (customer customers);
#define CUSTOMER_SIZE 2

int main()
{

    customer customers[CUSTOMER_SIZE];
    for(int i = 0 ; i< CUSTOMER_SIZE ; i++){
         customers[i] = AddNewCustomer();
    }
   for(int i = 0 ; i < CUSTOMER_SIZE ; i++ ){
        DisplayCustomerHavingBalanceLessThan200(customers[i]);
        DisplayCustomerHavingBalanceMoreThan1000(customers[i]);
        }

//    for(int i = 0 ; i< CUSTOMER_SIZE ; i++){
//        if(customers[i].balance > 1000){
//            customers[i].balance = customers[i].balance + 100;
//            DisplayCustomer(customers[i]);
//        }
//    }




    return 0;
}


customer AddNewCustomer(){
    customer customers;

    printf("enter your Name : \n");
    scanf("%s",customers.name);

    printf("enter your account number : \n");
    scanf("%d",&customers.account_number);



    printf("enter your balance : \n");
    scanf("%d" , &customers.balance);

        return customers;
}
void DisplayCustomer(customer customers){
    int sum;

        printf("customer name = %s \n" ,customers.name);
        printf("customer account number = %d \n" , customers.account_number);

        printf("customer balance = %d \n" , customers.balance);

}

void DisplayCustomerHavingBalanceLessThan200 (customer customers){

    if(customers.balance <= 200){
        DisplayCustomer(customers);
    }
}
void DisplayCustomerHavingBalanceMoreThan1000 (customer customers){

    if(customers.balance >= 1000){
            customers.balance = customers.balance + 100 ;
            DisplayCustomer(customers);
    }

}

