#include <stdio.h>

int main(){
    char C;
    while(C<'a' || C>'z')
    {
        scanf("%c",&C);
    }
    if(C=='z')
    {
        printf("a");
    }
    else
    {
        printf("%c",C+1);
    }
    return 0;
}