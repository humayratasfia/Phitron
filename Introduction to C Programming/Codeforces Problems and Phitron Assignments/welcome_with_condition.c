#include <stdio.h>

int main(){
    int A, B;
    do
    {
        scanf("%d %d",&A ,&B);
    } while (A<=0 || A>=100 || B<=0 || B>=100);

    if(A>=B)
    {
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}