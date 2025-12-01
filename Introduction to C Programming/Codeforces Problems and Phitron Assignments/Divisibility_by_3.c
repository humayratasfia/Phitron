#include <stdio.h>
#include <math.h>

int main(){
    long long int n;
    scanf("%d",&n);

    long long int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }

    long long int sum = 0;
    
    for(int i=0;i<n;i++)
    {
        sum = sum * 10 + a[i];
    }
    
    if(sum%3==0)
    {
        printf("YES\n");
    }
    else if(sum%3!=0)
    {
        printf("NO\n");
    }
    return 0;
}