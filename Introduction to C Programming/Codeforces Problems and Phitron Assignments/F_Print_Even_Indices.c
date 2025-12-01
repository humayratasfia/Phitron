#include <stdio.h>

void rec(int a[], int n, int i)
{
    if(i==n)
    {
        return;
    }
    rec(a,n,i+1);

    if(i%2==0)
    {
        printf("%d",a[i]);
    }
    if(n!=1 && i%2==0)
    {
        printf(" ");
    }
}

int main(){
    int n;
    scanf("%d",&n);

    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    rec(a,n,0);
    return 0;
}