#include <stdio.h>
#include <stdlib.h> //need it to use llabs()

int main(){
    int n;
    scanf("%d",&n);
    long long int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }

    long long int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum += a[i];
    }
    printf("%lld",llabs(sum));
    //llabs() is used for 
    //absolute value of long long integer
    
    return 0;
}