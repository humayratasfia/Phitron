#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    char a[n];
    for(int i=0;i<n;i++)
    {
        scanf(" %c",&a[i]);
    }

    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum = sum + (a[i]-48);
        //printf(" %c -> %d\n",a[i],a[i]);
    }
    printf("%d",sum);
    return 0;
}