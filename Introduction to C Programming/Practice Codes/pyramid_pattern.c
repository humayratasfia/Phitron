#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int star = 1;
    int gap = n-1;
    for(int i=1;i<=n;i++)
    {
        for(int j=gap;j>=1;j--)
        {
            printf(" ");
        }
        for(int k=1;k<=star;k++)
        {
            printf("*");  
        }
        printf("\n");
        gap--;
        star += 2;
    }
    return 0;
}