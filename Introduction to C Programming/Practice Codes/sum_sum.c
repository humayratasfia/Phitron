#include <stdio.h>

int main(){
    int n;
    int sum_pos=0, sum_neg=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            sum_neg += a[i];
        }
        else{
            sum_pos += a[i];
        }
    }
    printf("%d %d",sum_pos,sum_neg);
    
    return 0;
}