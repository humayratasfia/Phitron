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
    
    int space2 = 0;
    int star2 = n*2 - 1;  //took me an eternity to figure out eww
    for(int i=1;i<=n;i++)
    {
        for(int i=0;i<=space2;i++)
        {
            if(i>0)
            {
                printf(" ");
            } 
        }
        space2++;

        for(int i=1;i<=star2;i++)
        {
            printf("*");
        }
        star2-=2;
        
        printf("\n");
    } 

    return 0;
}