#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a); //Input must be a 4 digit number.
    a = a / 1000; 
    /*Example: 4565 when divided by 1000 we get integer 4
    which is the first digit of the number. 
    Calculating a%10 will give us the last 1 digit of the
    number.*/

    if(a%2==0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }
    return 0;
}