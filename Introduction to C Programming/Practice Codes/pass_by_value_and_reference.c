//Pass by value
#include <stdio.h>

void fun(int x)
{
    x = 20;
    /* passes the value of x
    of main() to another variable x
    of fun() function.*/
}

int main(){
    int x = 10;
    fun(x);
    printf("%d",x);
    return 0;
}

//Pass by Reference
#include <stdio.h>

void fun(int *p)
{
    *p = 20; 
    /*updates the value of the 
    variable whose address is 
    stored in the pointer variable p.*/
}

int main(){
    int x = 10;
    fun(&x);
    printf("%d",x);
    return 0;
}