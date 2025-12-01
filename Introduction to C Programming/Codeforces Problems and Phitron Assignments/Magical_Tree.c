#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int l = (6+1*((n-1)/2)); //took me eternity

    int gap = l - 1;
    int star = 1;
    for(int i=1;i<=l;i++)
    {
        for(int j=gap;j>=1;j--)
        {
            printf(" ");
        }
        for(int j=1;j<=star;j++)
        {
            printf("*");
        }
        gap--;
        star+=2;
        printf("\n");
    }

    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=n;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}