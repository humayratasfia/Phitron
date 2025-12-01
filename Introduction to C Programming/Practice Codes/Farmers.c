#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    int M1, M2, D;
    for(int i=1;i<=t;i++)
    {
        scanf("%d %d %d",&M1, &M2, &D);
        
        int day = D - (D*M1)/(M1+M2);

        printf("%d\n",day);
    }
    return 0;
}