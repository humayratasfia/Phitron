#include <stdio.h>

int main(){
    int t, width, height;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%d %d",&width,&height);
        if(width!=height)
        {
            printf("Rectangle\n");
        }
        else{
            printf("Square\n");
        }
    }
    return 0;
}