#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 01. myList.size() - Returns the size of the list.
    list <int> l1 = {1, 2, 3, 4, 5};
    cout << l1.size() << endl; // O(1)

    // OUTPUT: 5

    // 02. myList.max_size() - Returns the maximum size the list can hold.
    list <int> l2;
    cout << l1.max_size() << endl; // O(1)

    // OUTPUT: 768614336404564650

    // 03. myList.clear() - Clears the list elements.
    list <int> l3 = {1, 2, 3, 4, 5};
    l3.clear(); // O(N)
    cout << l3.size() << endl; 

    // OUTPUT: 0

    // 04. myList.empty() - Returns true/false if the list is empty or not.
    list <int> l4;
    cout << l4.empty() << endl; // O(1)

    // OUTPUT: 1 (true)

    // 05. myList.resize() - Change the size of the list.
    list <int> l5 = {10, 20, 30};
    l5.resize(2); // O(K)
    for(int val: l5)
    {
        cout << val << " ";
    }
    cout << endl;

    // OUTPUT: 10 20 

    l5.resize(5); // O(K)
    for(int val: l5)
    {
        cout << val << " ";
    }
    cout << endl;

    // OUTPUT: 10 20 0 0 0

    return 0;
}