#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);

    for(int i=1;i<=t;i++)
    {
        int n;
        scanf("%d",&n);

        char a[n+1];
        scanf("%s",a);

        char last = a[n-1];
        int count = 0;
        for(int i=0;i<n;i++)
        {
            if(a[i] != last)
            {
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}