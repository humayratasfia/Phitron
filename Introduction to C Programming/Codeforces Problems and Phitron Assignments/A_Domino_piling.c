#include <stdio.h>

int main(){
    int l, b;
    scanf("%d %d",&l,&b);

    int area = l * b;

    int domino = 0;
    int d_area;

    for(int i=1;i<area;i++)
    {
        d_area = 2 * 1 * i;

        if(d_area<=area)
        {
            domino++;
        }
        else{
            break;
        } 
    }

    printf("%d\n",domino);

    return 0;
}