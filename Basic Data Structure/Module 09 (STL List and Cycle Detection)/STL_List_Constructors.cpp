#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 01. list <type> myList; - Construct a list with 0 elements
    list <int> l1; // O(1)
    cout << l1.size() << endl;

    // OUTPUT: 0

    // 02. list <type> myList(N); - Construct a list with N elements and the value will be garbage.
    list <int> l2(10); // O(N)
    cout << l2.size() << endl;

    // OUTPUT: 10

    // 03. list <type> myList(N,V); - Construct a list with N elements and the value will be V.
    list <int> l3(10,5); // O(N)

    for(auto it=l3.begin(); it!=l3.end(); it++) // Print list using iterator.
    {
        cout << *it << " "; // Print by dereferencing the Iterator.
    }
    cout << endl;

    for(int val: l3) // Print list using Range-based For Loop.
    {
        cout << val << " ";
    }
    cout << endl;

    // OUTPUT: 5 5 5 5 5 5 5 5 5 5

    // 04. list <type> myList(list2); - Construct a list by copying another list list2.
    list <int> l4 = {1, 2, 3, 4, 5};
    list <int> l5(l4); // O(N)

    for(int val: l5)
    {
        cout << val << " ";
    }
    cout << endl;

    // OUTPUT: 1 2 3 4 5

    // 05. list <type> myList(A,A+N); - Construct a list by copying all elements from an array A of size N.
    int a[] = {10, 20, 30};
    list <int> l6(a,a+3); // O(N)

    for(int val: l6)
    {
        cout << val << " ";
    }
    cout << endl;

    // OUTPUT: 10 20 30

    // 06. list <type> myList(v.begin(),v.end()); - Construct a list by copying all elements from a vector v.
    vector <int> v = {1, 2, 3, 4, 5};
    list <int> l7(v.begin(), v.end()); // O(N)

    for(int val: l7)
    {
        cout << val << " ";
    }
    cout << endl;

    // OUTPUT: 1 2 3 4 5

    return 0;
}