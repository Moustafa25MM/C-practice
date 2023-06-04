#include <stdio.h>
#include <stdlib.h>


int main()
{
    char str[200];
    int alphabets,words, i = 0;

    printf("enter The sentence to find the no. of alphabets and words: \n");
    gets(str);

    for (i =0;str[i] != '\0';i++)
    {
       if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') ){
            alphabets++;
       }
        if(str[i] == ' ' && str[i+1] != ' '){
            words++;
       }
    }

    printf("The no. Of alphabets in the sentence are: %d\n", alphabets);
    printf("the no. of words in the sentence are : %d\n" , words+1);

    return 0;
}
