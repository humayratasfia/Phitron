#include <stdio.h>

int main(){
    int t, x, y, temp;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%d %d",&x ,&y);

        if(x>y)
        {
            temp = x;
            x = y;
            y = temp;
        }
        
        int sum = 0;

        for(int i=x+1;i<y;i++)
        {
            if(i%2!=0)
            {
                sum = sum + i;
            }
        }
        printf("%d\n",sum);
    }
    
    return 0;
}