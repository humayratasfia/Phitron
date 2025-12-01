#include <stdio.h>

long long int rec(int a[], int len, int i)
{
    if(i==len-1)
    {
        return a[i];
    }

    long long int sum = a[i] + rec(a,len,i+1);
    return sum;

}
int main(){
    int n;
    scanf("%d",&n);

    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    long long int sum = rec(a,n,0);

    printf("%lld",sum);
    return 0;
}