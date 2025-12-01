#include <stdio.h>

void rec(int n, int i)
{
    if(i==n)
    {
        return;
    }

    printf("I love Recursion\n");

    rec(n,i+1);
}

int main(){
    int n;
    scanf("%d",&n);

    rec(n,0);
    return 0;
}