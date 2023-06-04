#include <stdio.h>
#include <stdlib.h>


/*
) Input and Output from Array using pointers:
  C Program that have an Array of integers, read array data from user, Ptr -> Arr, print that array using Ptr.
 (try to use "Array Notation while reading data" and "Pointer notation while printing data")

*/
int main()
{
    int arr[5];
    int *ptr = arr;
    for(int i = 0; i < 5 ; i++){
        printf("enter a postive number : \n");
        scanf("%d",&arr[i]);
    }
    for(int i = 0 ; i < 5 ; i++){
        printf("the arr[%d] = %d\n" , i , *(ptr+i)); // --> ptr[i]
    }


    return 0;
}
