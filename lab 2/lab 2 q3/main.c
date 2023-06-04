#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z;
    printf("enter number 1 : ");
    scanf("%d",&x);
    printf("enter number 2 : ");
    scanf("%d",&y);
    printf("enter number 3: ");
    scanf("%d",&z);
    if(x==y && y==z){
        printf("they are the same");
    }
    else if(x >= y && x >= z){
        printf("x is the largest");
    }
    else if (y >= x && y>=z){
        printf("y is the largest");
    }

    else {
        printf("z is the largest");
    }

    return 0;
}
