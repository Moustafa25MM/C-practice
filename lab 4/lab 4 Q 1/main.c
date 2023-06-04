#include <stdio.h>
#include <stdlib.h>

void swap(int *x,int* y);
int main(){

   int x, y = 0;
   printf("enter two numbers you want to swap : \n");
   printf("enter x : \n");
   scanf("%d",&x);
   printf("enter y : \n");
   scanf("%d",&y);
    swap(&x,&y);
    printf("the new (x = %d and y = %d )\n",x,y);
    return 0;
}

void swap(int *x,int* y){
    int tmp =  *x;
    *x = *y;
     *y = tmp;
     //printf("the new (x = %d and y = %d )\n" , *x , *y);
}
