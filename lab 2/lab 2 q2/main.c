#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 0;
    printf("enter a number : ");
    scanf("%d",&x);
    if(x == 0){printf("this number is not even nor odd");}
    else if(x % 2 == 0) {
        printf("this number is even");
    }
    else{
        printf("this number is odd");
    }

    return 0;
}
