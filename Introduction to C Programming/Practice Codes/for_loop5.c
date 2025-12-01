//Multiples of 2 upto 10 times 
#include <stdio.h>

int main()
{
    int i, sum;
    for(i=1;i<=10;i++)
    {
        sum = i * 2;
        printf(" 2 * %d = %d \n", i, sum);
    }
    printf("The condition becomes false when i = %d",i);
}