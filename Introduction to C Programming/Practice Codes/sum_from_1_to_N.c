//Sum from 1 to N
#include <stdio.h>

int main()
{
    int i, N, sum=0;
    printf("Enter a value for N: ");
    scanf("%d",&N); //Taking input for N
    for(i=1;i<=N;i++)
    {
        sum = sum + i;
    }
    printf("\nSum = %d",sum);
}