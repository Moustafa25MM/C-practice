#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main(){

    char first[100];
    char second[100];
    printf("enter the first string : ");
    gets(first);
    printf("enter the second string : ");
    gets(second);

    strcpy(first,second);
    printf("%s" , first);
    printf("---------------------------");


    int i ;
    for(i = 0 ; second[i] != '\0';i++){
        first[i] = second[i];
    }
    printf("%s",first);







    return 0;
}


