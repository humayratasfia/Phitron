#include <stdio.h>

int main(){
    int n, m;
    scanf("%d %d",&n,&m);

    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int fre[m+1]; //int fre[100001]={0}; 
    /* Since m doesn't have an given
    we can't initialize it.
    Even tho the problem didn't said to count 0
    I will do that for my own convenience. */
    
    for(int i=0;i<=m;i++)
    {
        fre[i]=0;
    }
    for (int i=0; i<n; i++)
    {
        fre[a[i]]++;
    }

    for (int i=1; i<=m; i++)
    {
        printf("%d\n",fre[i]);
    }

    return 0;
}