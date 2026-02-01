#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 01. myList.remove(V) - Remove the value V from the list.
    list <int> l1 ={10, 20, 100, 30, 40, 100, 50};
    l1.remove(100); // O(N)
    for(int val: l1)
    {
        cout << val << " ";
    }
    cout << endl;

    // OUTPUT: 10 20 30 40 50 

    // 02. myList.sort() - Sort the list in ascending order.
    list <int> l2 = {20, 40, 30, 50, 10};
    l2.sort(); // O(NlogN)
    for(int val: l2)
    {
        cout << val << " ";
    }
    cout << endl;

    // OUTPUT: 10 20 30 40 50 
    
    // 03. myList.sort(greater <type> ()) - Sort the list in descending order
    list <int> l3 = {20, 40, 30, 50, 10};
    l3.sort(greater <int> ()); // O(NlogN)
    for(int val: l3)
    {
        cout << val << " ";
    }
    cout << endl;

    // OUTPUT: 50 40 30 20 10 
    
    // 04. myList.unique() - Deletes the duplicate values from the list. You must sort the list first.
    list <int> l4 = {20, 20, 40, 30, 10, 50, 10, 10};
    l4.sort(); // O(NlogN)
    l4.unique(); // O(N)
    for(int val: l4)
    {
        cout << val << " ";
    }
    cout << endl;

    // OUTPUT: 10 20 30 40 50
    
    // 05. myList.reverse() - Reverse the list.
    list <int> l5 = {10, 20, 30, 40, 50};
    l5.reverse(); // O(N)
    for(int val: l5)
    {
        cout << val << " ";
    }
    cout << endl;

    // OUTPUT: 50 40 30 20 10
    
    return 0;
}