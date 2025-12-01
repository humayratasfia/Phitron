#include <stdio.h>
#include <string.h>

int main(){
    int t;
    scanf("%d",&t);
    char a[10001];
    for(int i=1;i<=t;i++)
    {
        scanf("%s",a);

        int cnt_A=0, cnt_a=0, cnt_1=0;
        for(int j=0;j<strlen(a);j++)
        {
            if(a[j]>='A' && a[j]<='Z')
            {
                cnt_A++;
            }
            else if(a[j]>='a' && a[j]<='z')
            {
                cnt_a++;
            }
            else if(a[j]>='0' && a[j]<='9')
            {
                cnt_1++;
            }
        }
        printf("%d %d %d\n",cnt_A,cnt_a,cnt_1);
    }
    return 0;
}