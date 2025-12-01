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

    for(int j=0;j<m;j++)
    {
        printf("%d",a[n-1][j]);
        
        if(j!=m-1)
        {
            printf(" ");
        }
    }
    printf("\n");
    for(int i=0;i<n;i++)
    {
       printf("%d",a[i][m-1]);
        
        if(i!=n-1)
        {
            printf(" ");
        } 
    }
    
    return 0;
}