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
            break; 
        /*When i=7, break statemrnt stops the loop 
        and doesn't print 7 as printf() is placed 
        after the break statement. If it is placed 
        before the break statement then 7 will be 
        printed.*/
        }
        printf("%d \n",i);
    }
    return 0;
}