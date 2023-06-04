#include <stdio.h>
#include <stdlib.h>
void isAlpha(char c);
int main()
{
    char character ;
    printf("enter a character : ");
    scanf(" %c",&character);
    isAlpha(character);

    return 0;
}

void isAlpha(char c){
    int a = c;
    if( (c >= 65 && c <= 90) || ( c >= 97 && c <= 122 ) ){
        printf("you entered a character");
    }
    else{
        printf("you didn't enter a character");
    }
}
