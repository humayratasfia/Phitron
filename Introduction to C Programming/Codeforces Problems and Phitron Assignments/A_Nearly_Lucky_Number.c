#include <stdio.h>

int main(){
    char number[20];
    scanf("%s",number);

    int flag = 0;
    for(int i=0;number[i]!='\0';i++)
    {
        if(number[i]=='4' || number[i]=='7')
        {
            flag++;
        }
        // printf("%d\n",flag);
    }

    if(flag==4 || flag==7)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    
    return 0;
}