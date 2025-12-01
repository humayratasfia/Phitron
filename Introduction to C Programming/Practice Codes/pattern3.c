#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    char alpha='A';

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%c ",alpha);
        }
        printf("\n");
        alpha++;
    }
    return 0;
}