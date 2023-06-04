#include <stdio.h>
#include <stdlib.h>

int main()
{
    char firstName[100];
    char secondName[100];
    char fullName[100];
    printf("enter your first name : \n");
    gets(firstName);
    printf("enter your second name : \n");
    gets(secondName);

    int i ,j=0;
    for(i =0 ; firstName[i] != '\0' ; i++ ){
        fullName[j] = firstName[i];
        j++;
    }
    fullName[j] = ' ';
    j++;
    for(i = 0 ; secondName[i] != '\0' ; i++){
        fullName[j] = secondName[i];
        j++;
    }
    fullName[j]  = '\0';
    printf("%s" , fullName);
    return 0;
}
