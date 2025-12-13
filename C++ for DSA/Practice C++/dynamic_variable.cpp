#include <bits/stdc++.h>
using namespace std;
int *p;

void fun()
{
    p = new int;  
    /*new is a keyword used to access heap memory.
    It returns an address that needs to be stored in a 
    pointer variable so that we don't lose it */
    
    *p = 100;
    cout << "Fun -> " << *p << endl;
    return;
}
int main()
{
    fun();
    cout << "Main -> " << *p << endl;
    return 0;
}