#include <stdio.h>
#include <stdlib.h>

int main()
{

 //   int number , i = 0;
   // printf("enter the number : ");
    //scanf("%d",&number);
    //for(i=1;i<=10;i++){
      //  int multplication = i*number;
        //printf("%d\n",multplication);
    //}

    generateMultiplicationTable();

    return 0;
}

void generateMultiplicationTable(){
    int i,j = 0;
    for(i=1;i<=10;i++){
        for(j=1;j<=10;j++){
            int multi = i*j;
            printf("%d\n",multi);
        }
        printf("----------------------- \n");
    }
}
