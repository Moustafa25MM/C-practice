#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include <time.h>

int main()
{
    int size = 0;
    int row , column = 0;
    printf("enter the size : \n");
    scanf("%d" , &size);
    row = 1;
    column = (size + 1)/2;
    int i;
    if(size % 2 != 0){
            for(i = 1; i<= (size * size) ; i++){
                gotoxy(column*5,row);
                printf("%5d",i);
                //delay(1);

                if(i % size == 0){
                    row ++;
                }
                else{
                    row--;
                    column--;
                    if(row == 0){
                        row = size;
                    }
                    if(column == 0){
                        column = size;
                    }
                }
            }
    }
    else{
      printf("please enter an odd number ");
    }

    return 0;
}
