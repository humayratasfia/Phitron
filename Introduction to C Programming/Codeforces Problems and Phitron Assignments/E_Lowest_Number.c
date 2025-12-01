#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int lowest = a[0], pos = 1;
    for(int i=0;i<n;i++)
    {
        if(a[i]<lowest)
        {
            lowest = a[i];
            pos = i+1;
        }
    }

    printf("%d %d",lowest,pos);

    return 0;
}