#include <stdio.h>

//Divisible
#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);
    if(N<0) 
    /* If the first input for N is a negative number then 
    the code will ask for an input N again. */
    {
        scanf("%d",&N);
    }
    
    if(N%3==0) 
    {
        printf("YES");
        //If N is divisable by 3 then the code will print YES.
    }
    else
    {
        printf("NO");
        //If N is not divisable by 3 then the code will print NO.
    }
    return 0;
}