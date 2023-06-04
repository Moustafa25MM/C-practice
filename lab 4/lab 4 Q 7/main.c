#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char string[100];
    printf("enter a string : \n");
    gets(string);
    int count = 0;

    //printf("%d\n" , strlen(string));

    for(int i = 0 ; string[i] != '\0' ; i++ ){
        count++;
    }
    printf("%d" , count);
    return 0;
}


