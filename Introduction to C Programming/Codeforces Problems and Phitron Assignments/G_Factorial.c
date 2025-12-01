#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    long long int n[t];
    for(int i=0;i<t;i++)
    {
        scanf("%lld",&n[i]);
    }
    for(int i=0;i<t;i++)
    {
        long long int factorial = 1; 
        for(int j=n[i];j>=1;j--) 
        {
            factorial = factorial * j; //I hate this part eww
            
        }
        printf("%lld\n",factorial);
    }
    return 0;
}