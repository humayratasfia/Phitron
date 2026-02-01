#include <bits/stdc++.h>
using namespace std;

int main()
{
    // LIST ELEMENT ACCESS.
    // 01. myList.back() - Access the tail element.
    list <int> l1 = {10, 20, 30, 40, 50};
    cout << l1.back() << endl; // O(1)

    // OUTPUT: 50

    // 02. myList.front() - Access the head element.
    list <int> l2 = {10, 20, 30, 40, 50};
    cout << l2.front() << endl; // O(1)

    // OUTPUT: 10

    // 03. next(myList.begin(),i) - Access the ith element
    list <int> l3 = {10, 20, 30, 40, 50};
    cout << *next(l3.begin(), 3) << endl; // O(N)

    // OUTPUT: 40 

    // LIST ITERATORS.
    // 01. myList.begin() - Pointer to the first element.
    list <int> l4 = {10, 20, 30, 40, 50};
    cout << *l4.begin() << endl; // O(1)

    // OUTPUT: 10

    // 02. myList.end() - Pointer to the last element.
    // O(1) 
    // Cannot access the last element of list by dereferncing it.

    return 0;
}