#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int space = n-1;
    int symbol = 1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=space;j++)
        {
            printf(" ");
        }
        space--;
        
        for(int j=1;j<=symbol;j++)
        {
            if(i%2!=0)
            {
                printf("#");
            }
            else if(i%2==0)
            {
                printf("-");
            }
        }
        symbol+=2;
        printf("\n");
    }

    int space2 = 1;
    int symbol2 = (n-1)*2 - 1; //most shitty part as always
    for(int i=n-1;i>=1;i--)
    {
        for(int j=1;j<=space2;j++)
        {
            printf(" ");
        }
        space2++;

        for(int j=1;j<=symbol2;j++)
        {
            if(i%2!=0)
            {
                printf("#");
            }
            else if(i%2==0)
            {
                printf("-");
            }
        }
        symbol2-=2;
        printf("\n");
    }
    return 0;
}