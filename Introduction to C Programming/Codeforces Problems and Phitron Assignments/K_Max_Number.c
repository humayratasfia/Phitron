#include <stdio.h>

int rec(int a[], int len, int i)
{
    if(i==len-1)
    {
        return a[i];
    }

    int max = rec(a,len,i+1);

    if(a[i]>max)
    {
        return a[i];
    }
    else
    {
        return max;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int len = n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int ans = rec(a,n,0);

    printf("%d",ans);

    return 0;
}