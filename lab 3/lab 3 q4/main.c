#include <stdio.h>
#include <stdlib.h>


int max(int x , int y , int z);

int main()
{
    int a , b , c =0;
    printf("enter three numbers : ");
    scanf("%d %d %d",&a,&b,&c);
    int maximmax = max(a,b,c);
    printf("maximum number = %d",maximmax);


    return 0;
}


int max(int x , int y , int z){
    int maximum = 0;

    if(x >= y && x>= z){
        maximum = x;
    }
    else if(y >= x && y >= z){
        maximum = y;
    }
    else{
        maximum = z ;
    }
    return maximum;

}
