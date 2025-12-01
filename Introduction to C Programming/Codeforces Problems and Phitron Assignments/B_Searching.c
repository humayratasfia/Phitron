#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int x, check=-1;
    scanf("%d",&x);
    for(int i=0;i<n;i++)
    {
        if(x==a[i])
        {
            printf("%d",i);
            check = 0; 
            //if x doesn't match any value
            //then the value of check will never update
            break;
        }    
    }
    if(check!=0)
    {
        printf("-1");
    }
    return 0;
}
