#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//               Recursive: Power.



long long power(int base ,int x);

int main(){

    int base , x ;
    long long result ;
    printf("enter the Base Number : \n");
    scanf("%d",&base);
    printf("enter the power to Number : \n");
    scanf("%d",&x);
    result = power(base,x);
    printf("the result of power(base,power to) = %li",result);

    return 0;
}


long long power(int base ,int x){
    if(x != 0){
        return (base *power(base,x-1) );
    }
    else{
        return 1;
    }
}
