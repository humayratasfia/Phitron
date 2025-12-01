#include <stdio.h>

int main(){
    int n, m;
    scanf("%d %d", &n, &m);

    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    int flag = 0;
    if(n==m)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i==j && a[i][j]!=a[0][0])
                {
                    flag = 1;
                }
                else if(i!=j && a[i][j]!=0)
                {
                    flag = 1;
                }
            }
        }
    }
    else{
        printf("Not Scalar Matrix.");
    }

    if(flag == 1)
    {
        printf("Not Scalar Matrix.");
    }
    else{
        printf("Scalar Matrix.");
    }
    return 0;
}