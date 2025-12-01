#include <stdio.h>
#include <string.h>

int main(){
    int t;
    scanf("%d",&t);

    char s[101];
    int length;
    for(int i=0;i<t;i++)
    {
        scanf("%s",s);

        length = strlen(s);

        if(length<=10)
        {
            printf("%s",s);
        }
        else{
            printf("%c",s[0]);
            int count=0;
            for(int i=1;i<length-1;i++)
            {
                count++;
            }
            printf("%d",count);
            printf("%c",s[length-1]);

        }
        printf("\n");
    }
    return 0;
}