#include <stdio.h>

int main(){
    int money;
    scanf("%d",&money);

    if(money>=5000)
    {
        printf("You can go to Cox'sbazar.");
    }
    else if(money>=3500)
    {
        printf("You can go to Tanguor Haor");
    }
    else if (money>=500)
    {
        printf("You can go to Sadapahar");
    }
    else{
        printf("Taka ta amake Bkash koro!");
    }
    return 0;
}