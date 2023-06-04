#include <stdio.h>
#include <stdlib.h>

int main()
{
    char string[100];
    char newString[100];

    printf("enter a string : \n");
    gets(string);
    int i,j=0;
    int a = 5;
    for(i = 0; string[i] != '\0' ; i++){
        if((string[i] >= 'a' && string[i] <= 'z')||(string[i] >= 'A' && string[i] <= 'Z')){
            newString[j] = string[i];
            j++;
        }

    }
    newString[j] = '\0';
    printf("%s" , newString);
    return 0;
}
