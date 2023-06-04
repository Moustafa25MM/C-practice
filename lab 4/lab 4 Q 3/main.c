#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch ;
    printf("enter a character : \n");
    ch = getch();

    if(ch == -32){
        printf("extended key entered ");
        ch = getch();
        printf("%d" , ch);
    }
    else{
        printf("Normal Key entered ");
        printf("%d" , ch);
    }
    return 0;
}
