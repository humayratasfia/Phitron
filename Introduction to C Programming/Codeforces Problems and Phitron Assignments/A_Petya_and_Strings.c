#include <stdio.h>
#include <string.h>

int main(){
    char a[101], b[101];
    scanf("%s", a);
    scanf("%s", b);

    for(int i=0;i<strlen(a);i++)
    {
        // scanf("%c",&a[i]);

        if(a[i]>='A' && a[i]<='Z')
        {
            a[i] = a[i] + 32;
        }

    }
    // printf("%s",a);

    for(int i=0;i<strlen(b);i++)
    {
        // scanf("%c",&b[i]);

        if(b[i]>='A' && b[i]<='Z')
        {
            b[i] = b[i] + 32;
        }

    }
    // printf("%s",b);

    printf("%d",strcmp(a,b));

    return 0;
}