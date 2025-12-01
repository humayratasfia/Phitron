#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    
    int space = n - 1;
    int star = 1;
    for(int i=1;i<=n;i++)
    {
        for(int i=space;i>0;i--)
        {
            printf(" ");
        }
        space--;

        for(int i=1;i<=star;i++)
        {
            printf("*");
        }
        star+=2;
        
        printf("\n");
    }  

    return 0;
}