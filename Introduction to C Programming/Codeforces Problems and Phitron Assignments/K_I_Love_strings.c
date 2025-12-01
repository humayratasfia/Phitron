#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++)
    {
        char s[51], t[51];
        scanf("%s %s",s,t);
        int len1 = strlen(s);
        int len2 = strlen(t);
        int maxlen;
        if(len1>len2)
        {
            maxlen = len1; 
        }
        else if(len2>len1)
        {
            maxlen = len2;
        }
        else if(len1==len2)
        {
            maxlen = len1; 
        }
        for(int j=0;j<maxlen;j++)
        {
            if(j<len1)
            {
                printf("%c",s[j]);
            }
            if(j<len2)
            {
                printf("%c",t[j]);
            }
        }
        printf("\n");
    }
    
    return 0;
}