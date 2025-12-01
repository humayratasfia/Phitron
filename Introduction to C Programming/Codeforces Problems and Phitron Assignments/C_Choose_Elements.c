#include <stdio.h>

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    long long int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }

    for(int i=0;i<n-1;i++)
    {
        for(int j=1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    long long int sum = 0;
    for(int i=0;i<m;i++)
    {
        sum = sum + a[i];
    }
    printf("%lld",sum);

    return 0;
}