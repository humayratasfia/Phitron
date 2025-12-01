#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);

    for(int i=1;i<=t;i++)
    {
        long long int m, a, b, c;
        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);

        long long int div = a * b * c;

        if(m%div==0)
        {
            printf("%lld\n",m/div);
        }
        else if(m%div!=0)
        {
            printf("-1\n");
        }
    }
    return 0;
}