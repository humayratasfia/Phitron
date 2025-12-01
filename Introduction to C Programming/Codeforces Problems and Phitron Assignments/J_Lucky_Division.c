#include <stdio.h>

int main(){
    int num;
    scanf("%d",&num);

    int flag = 0;

    int check[13] = {4,7,44,47,74,77,444,447,474,477,744,747,777};
    
    for(int i=0;i<13;i++)
    {
        if(num%check[i]==0)
        {
            flag++;
        }
    }
    if(flag!=0)
    {
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}