#include <stdio.h>

void rec(int n, int i)
{
    if(i==n+1)
    {
        return;
    }

    rec(n,i+1);
    
    printf("%d",i);
    if(i != 1)
    {
        printf(" ");
    }
}
int main(){
    int n;
    scanf("%d",&n);

    rec(n,1);
    return 0;
}