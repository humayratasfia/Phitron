#include <stdio.h>

int main(){
    int x, d;
    scanf("%d %d",&x ,&d);

    x = x * 2;
    if(x<=d)
    {
        printf("double it");
    }
    else
    {
        printf("take it");
    }

    return 0;
}