#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=0,sum=0;

    while(sum <= 100){
        printf("enter the number : ");
        scanf("%d",&x);
        sum += x;
    }
    printf("\n you exceeded 100 by %d" , sum-100);


    return 0;
}
