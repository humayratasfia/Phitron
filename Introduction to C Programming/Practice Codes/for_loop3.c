//Decrement by 1 using for loop starting from 100 upto 1
#include <stdio.h>

int main()
{
    int i;
    for(i=100;i>=1;i-=1)
    {
        printf("%d \n",i);
    }
    printf("The condition becomes false when i = %d",i);
}