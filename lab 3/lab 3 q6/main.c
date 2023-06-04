#include <stdio.h>
#include <stdlib.h>

void convertToUpperCase(char character);
int main()
{
    char character ;
    printf("enter a lower case character to get it in upper case model : \n");
    scanf("%c",&character);
    convertToUpperCase(character);

    return 0;
}

void convertToUpperCase(char character){
    int a = character;
    if( a >= 97 && a<= 122 ){
        character  = character - 32;
        printf("the upper case = %c" , character);
    }
    else if((a >= 65 && a <= 90)){
        printf("you entered a upper case letter");
    }
    else{
        printf("you didn't enter a character");
    }

}
