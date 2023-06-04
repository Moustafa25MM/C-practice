#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("enter a number ranges from 1 and 4 : \n");
    printf(" 1 will create new file\n");
    printf(" 2 will read file \n");
    printf(" 3 will exit \n");
    //printf(" 4 to get the menu again \n");


    while(x != 3 ){

        scanf("%d",&x);
        if(x == 1){
            system("CLS");
            printf("new file created \n");
            printf("press 2 to read the file \n");
            printf("press 3 to exit \n");
            printf("press 4 to get the menu again \n");

        }
        if(x == 2){
            system("CLS");
            printf("read the file \n");
            printf("press 3 to exit \n");
            printf("press 4 to get the menu again \n");
        }
        if(x == 3){
            system("CLS");
            break;
        }
        if(x == 4){
            system("CLS");
            printf(" 1 will create new file\n");
            printf(" 2 will read file \n");
            printf(" 3 will exit \n");;
        }

    }


    return 0;
}
