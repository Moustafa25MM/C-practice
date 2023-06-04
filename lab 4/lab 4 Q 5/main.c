#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
   char str[100];
   printf("enter a String : ");
   gets(str);
   char ch;
   printf("enter the frequency character : ");
    scanf("%c",&ch);
    int count =0;

   for(int i = 0 ; i < strlen(str);i++){
    if(str[i]== ch){
        count ++;
    }
   }
   printf("the frequency character : %d " , count );



    return 0;
}


