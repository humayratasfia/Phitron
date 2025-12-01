//Break Statement
#include <stdio.h>

int main()
{
    int i, n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i==7)
        {
            continue; 
        /*When i=7, continue statement skips the 
        code typed after it and directly goes to
        increment/decrement, it doesn't print 7 as 
        printf() is placed after the continue statement. 
        If it is placed before the continue statement 
        then 7 will be printed.*/
        }
        printf("%d \n",i);
    }
    return 0;
}