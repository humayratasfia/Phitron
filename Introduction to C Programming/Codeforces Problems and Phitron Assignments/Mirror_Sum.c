#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int a[n], b[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }

    int i=0, j=n-1;
    while(i<n)
    {
        a[i] = a[i] + b[j];

        i++;
        j--;
    }

    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}