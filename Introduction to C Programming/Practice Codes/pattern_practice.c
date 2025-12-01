#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int value = 1;
    int gap = n-1;
    for(int i=1;i<=n;i++)
    {
        for(int j=gap;j>=1;j--)
        {
            printf(" ");
        }
        for(int k=1;k<=value;k++)
        {
            printf("%d ",k);  
        }
        printf("\n");
        gap--;
        value++;
    }
    return 0;
}