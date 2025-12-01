#include <stdio.h>

int main(){
    char s[1001], t[1001];
    scanf("%s",s);
    scanf("%s",t);

    int m = strlen(s);
    int n = strlen(t);

    printf("%d %d\n",m,n);

    char a[m+n+1];
    for(int i=0;i<m;i++)
    {
        a[i] = s[i];
    }
    a[m] = ' ';
    
    for(int i=0;i<n;i++)
    {
        int x=m+1;
        a[i+x] = t[i];
    }
    
    a[m+n+1] = '\0';

    printf("%s",a);

    return 0;
}