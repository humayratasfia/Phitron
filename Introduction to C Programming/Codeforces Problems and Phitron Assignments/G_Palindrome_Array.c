#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int a[100001];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int f=0, l=n-1;

    int palinedrome = 1;

    while(f<l) //TWO POINTERS TECHNIQUE
    {
        if(a[f]!=a[l])
        {
            palinedrome = 0; 
            break;
        }
        else
        {
            f++;
            l--;
        }
    }
    
    if(palinedrome==0)
    {
        printf("NO");
    }
    else{
        printf("YES");
    }

    return 0;
}