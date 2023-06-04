#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 5;
    int y = 6;

    float div = (float)x/y;
    int mod = x%y;
    int quotient = x/y;

    printf("quotient = %d" , quotient);
    printf(" div = %f\n" , div);
    printf("mod = %d",mod);
    return 0;
}
