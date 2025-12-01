#include <stdio.h>
#include <string.h>

int main(){
    char a[1001];
    scanf("%s",a);
    int length = strlen(a);

    int f=0, l=length-1;

    int palindrome = 1;
    while(f<l) //TWO POINTERS TECHNIQUE
    {
        if(a[f]!=a[l])
        {
            palindrome = 0; 
            break;
        }
        else
        {
            f++;
            l--;
        }
    }

    if(palindrome==0)
    {
        printf("NO");
    }
    else{
        printf("YES");
    }

    return 0;
}