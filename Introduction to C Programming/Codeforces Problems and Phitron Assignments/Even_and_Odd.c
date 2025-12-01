#include <stdio.h>

void odd_even()
{
    int n;
    scanf("%d",&n);

    int a[n];
    int odd = 0, even = 0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

        if(a[i]%2!=0 && a[i]!=0)
        {
            odd++;
        }
        if(a[i]%2==0)
        {
            even++;
        }
    }

    printf("%d %d",even,odd);
}

int main(){
    odd_even();

    return 0;
}