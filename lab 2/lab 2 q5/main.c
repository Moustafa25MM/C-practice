#include <stdio.h>
#include <stdlib.h>

int main() {
     int x , y;
     char operation;

     printf("Enter the two inputs:\n");
     scanf("%d%d",&x,&y);

     printf("Enter the operator : ");
     scanf(" %c",&operation);


     switch (operation) {
         case '+':
                   printf("add x and y is %d\n",x+y);
                   break;
         case '-':
                   printf("sub x and y is %d\n",x-y);
                   break;
         case '*':
                   printf("mult x*y is  %d\n" ,x*y);
                   break;
         case '/':
                   printf("div x/y is  %d\n", x/y);
                   break;
         default:
                   printf("%c is an Error operator \n",operation);
     }
 return 0;
}


