#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int a[100001];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int f=0, l=n-1;
    for(int i=0;i<n;i++)
    {
        int temp;
        while(f<l)
        {
            temp = a[f];
            a[f] = a[l];
            a[l] = temp;
            f++;
            l--;
        }
        printf("%d ",a[i]);

    }
    return 0;
}