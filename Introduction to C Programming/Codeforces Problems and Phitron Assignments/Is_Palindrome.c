#include <stdio.h>
#include <string.h>
int palindrome = 1;

int is_palindrome(char a[])
{
    int len = strlen(a);
    int f=0, l=len-1;
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

    return palindrome;
}

int main(){
    char a[1001];
    scanf("%s",a);
    
    is_palindrome(a);
    
    if(palindrome==0)
    {
        printf("Not Palindrome");
    }
    else{
        printf("Palindrome");
    }

    return 0;
}