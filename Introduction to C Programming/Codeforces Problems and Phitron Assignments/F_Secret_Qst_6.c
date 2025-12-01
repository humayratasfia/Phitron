#include <stdio.h>

int main(){
    
    int x, check = 0;;
    scanf("%d",x);

    int i = x;
        for(int j=2;j<=1000000;j++)
        {
            if(x>0 && i%i==0 && i%j!=0)
            {
                printf("%d",i);
                check = 1;
                break;
            }
        }

    return 0;
}