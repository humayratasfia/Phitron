#include <bits/stdc++.h>
using namespace std;

/* 
Adding reference symbol (&) before p 
[ void fun(int* &p){} ] -
Instead of declaring a new pointer variable,
it passes the p pointer variable present in the
main function.
*/
void fun(int* &p)
{
    int y = 200;
    p = &y;

    cout << "In Fun: " << &p << endl;
}

int main()
{
    int x = 10;
    int* p = &x;
    
    fun(p);

    cout << "In Main: " << &p << endl;
    
    return 0;
}

/*
Output:
In Fun: 0x61fe40
In Main: 0x61fe40
*/