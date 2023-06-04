#include <stdio.h>
#include <stdlib.h>

int *incrementArray(int size);

int main()
{
    int * ptr;
    int size;
    printf("enter the size of array : ");
    scanf("%d",&size);
    if(size <= 0){printf("enter a positive int and greater than zero");}
    else{
    ptr = incrementArray(size);
    }
    for(int i=0;i<size;i++){
        printf("%d\n" ,ptr[i]);
    }


    return 0;
}

int* incrementArray(int size){

        int * arr = (int *)malloc(size*sizeof(int));

        for(int i =0;i < size ; i++){
            printf("enter a number : ");
            scanf("%d",&arr[i]);
        }
        int * ptr = arr;
        return ptr;
}
