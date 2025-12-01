#include <stdio.h>

int main(){
    int x; 
    float y;
    do
    {
        scanf("%d",&x);
    } while (x<1 || x>2000);
    do
    {
        scanf("%f",&y);
    } while (y<1.00 || y>2000.00);
    
    if(x%5==0 && y>=x+0.50)
    {
        y = y - x - 0.50;
        printf("%.2f",y);
    }
    else
    {
        printf("%.2f",y);
    }
    return 0;
}