#include <stdio.h>

int main(){
    int ch;
    scanf("%c",&ch);

    if(ch>='a' && ch<='z')
    {
        ch = ch - 32; //'a' -> 'A'
        printf("%c",ch);
    }
    else
    {
        ch = ch + 32; //'A' -> 'a'
        printf("%c",ch);
    }
    return 0;
}