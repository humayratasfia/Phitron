#include <stdio.h>
#include <math.h>

int main(){
    long long int n;
    scanf("%lld",&n);
    for(long long int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("%lld\n",i);
        }
    }
    return 0;
}