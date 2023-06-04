#include <stdio.h>
#include <stdlib.h>

/*

    Using Dynamic Memomry Allocation :
) Input and Output from Array using pointers:
  C Program that have an Array of integers, read array data from user, Ptr -> Arr, print that array using Ptr.
 (try to use "Array Notation while reading data" and "Pointer notation while printing data")

*/
int main()
{

    int size;
    printf("enter the size of array :  ");
    scanf("%d",&size);
    if(size <= 0){
        printf("enter a positive int and greater than zero");
    }
    else{
    int arr[size];
    }
    //int *ptr = arr;
    int * ptr = (int *)malloc(size* sizeof(int));

    for(int i = 0; i < size ; i++){
        printf("enter a postive number : \n");
        scanf("%d",&ptr[i]);// -- > (ptr + i)
    }
    for(int i = 0 ; i < size ; i++){
        printf("the arr[%d] = %d\n" , i , ptr[i]); // --> *(ptr + i)
    }


    return 0;
}
