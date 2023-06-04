#include <stdio.h>
#include <stdlib.h>

int main()
{
    char string[100];
    int i,j=0;
    printf("enter a character : \n");
    for(i =0;i < 5; i++){
        scanf(" %c" ,&string[i]);
        j++;
    }
    string[j] = '\0';
    printf("%s" , string);


    return 0;
}
