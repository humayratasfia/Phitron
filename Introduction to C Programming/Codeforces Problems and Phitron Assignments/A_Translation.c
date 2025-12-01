#include <stdio.h>
#include <string.h>

int main(){
    char s[101], t[101];
    scanf("%s %s",s ,t);

    int flag = 0;
    int len = strlen(s);
    int len2 = strlen(t);

    for(int i=0;i<len;i++)
    {
        // printf("%d %d\n",i,flag);
        if(s[i]!=t[len-1-i])
        {
            flag = 1;
            break;
        }
        
    }

    if(flag == 1 || len != len2)
    {
        printf("NO\n");
    }
    if(flag != 1 && len == len2)
    {
        printf("YES\n");
    }

    return 0;
}