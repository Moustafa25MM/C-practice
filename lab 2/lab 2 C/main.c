#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 0;
    printf("enter a number : ");
    scanf("%d",&x);

    (x>0) ? (x >0 ) ? printf("Positive") : (x <0) ? printf("negative")
    : (x==0)  printf("Zero");

    return 0;
}
