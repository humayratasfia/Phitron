#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v = {1, 2, 3, 4, 5};

    // v.begin() and v.end()
    for(auto i = v.begin(); i < v.end(); i++)
    {
        cout << *i << " "; 
        /* vector iterators are pointers so to 
        access a value you need to dereference 
        the iterator. */
    }

    /* 
    OUTPUT:
    1 2 3 4 5
    */
    return 0;
}