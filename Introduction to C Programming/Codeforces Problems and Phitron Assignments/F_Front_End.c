#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int left = 0;
    int right = n-1;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            printf("%d",a[left]);
            left++;
        }
        else if(i%2!=0)
        {
            printf("%d",a[right]);
            right--;
        }

        if(i<n-1)
        {
            printf(" ");
        }
    }
    return 0;
}