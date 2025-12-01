#include <stdio.h>
#include <stdlib.h>

int main(){
    int t;
    scanf("%d",&t);

    for(int i=1;i<=t;i++)
    {
        int n;
        scanf("%d",&n);

        int a[n];
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }

        int b[n];
        for(int j=0;j<n;j++)
        {
            b[j] = a[j];
        }

        for(int j=0;j<n-1;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(b[j]>b[k])
                {
                    int temp = b[j];
                    b[j] = b[k];
                    b[k] = temp;
                }
            }
        }

        int c[n];
        for(int j=0;j<n;j++)
        {
            c[j] = abs(a[j] - b[j]);
        }

        for(int j=0;j<n;j++)
        {
            printf("%d",c[j]);

            if(j!=n-1)
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}