#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    char game[n+1];
    scanf("%s",game);

    int A=0, D=0;
    for(int i=0;game[i]!='\0';i++)
    {
        if(game[i]=='A')
        {
            A++;
        }
        else if(game[i]=='D')
        {
            D++;
        }
    }

    if(A>D)
    {
        printf("Anton\n");
    }
    else if(D>A)
    {
        printf("Danik\n");
    }
    else if(A==D)
    {
        printf("Friendship\n");
    }
    return 0;
}