#include <stdio.h>

int main(){
    int a, b, k;
    scanf("%d %d %d", &a, &b, &k);

    if(a%k==0 && b%k==0)
    {
        printf("Both");
    }
    else if(a%k==0 && b%k!=0)
    {
        printf("Memo");
    }
    else if(a%k!=0 && b%k==0)
    {
        printf("Momo");
    }
    else if(a%k!=0 && b%k!=0)
    {
        printf("No One");
    }
    return 0;
}