#include <stdio.h>
#include <stdlib.h>
int cube (int x);
int main()
{
    int x = 0;
    printf("enter the number that you want to get the cube of it \n");
    scanf("%d",&x);
    int cube_sum = cube(x);
    printf("the cube of the number you entered %d: \n" , cube_sum );
    return 0;
}

int cube (int x){
    return x*x*x ;
}
