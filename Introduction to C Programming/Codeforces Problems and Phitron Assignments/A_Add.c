#include <stdio.h>

int sum()
{
    int x,y;

    scanf("%d %d",&x,&y);

    int add = x + y;

    printf("%d",add);
}

int main(){
    
    sum();

    return 0;
}