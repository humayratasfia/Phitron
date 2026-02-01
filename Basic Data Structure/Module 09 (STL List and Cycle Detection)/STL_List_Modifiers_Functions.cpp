#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 01. myList= or myList.assign(list2.begin(),list2.end()) - Assign another list.
    list <int> l1 = {1, 2, 3, 4, 5};
    list <int> l2;
    l2 = l1; // O(N)
    // or, l2.assign(l1.begin(), l1.end()); // O(N)
    for(int val: l2)
    {
        cout << val << " ";
    }
    cout << endl;

    // OUTPUT: 1 2 3 4 5

    // 02. myList.push_back() - Add an element to the tail.
    list <int> l3 = {1, 2, 3, 4, 5};
    l3.push_back(6); // O(1)
    for(int val: l3)
    {
        cout << val << " ";
    }
    cout << endl;

    // OUTPUT: 1 2 3 4 5 6

    // 03. myList.push_front() - Add an element to the head.
    list <int> l4 = {1, 2, 3, 4, 5};
    l4.push_front(0); // O(1)
    for(int val: l4)
    {
        cout << val << " ";
    }
    cout << endl;

    // OUTPUT: 0 1 2 3 4 5 

    // 04. myList.pop_back() - Delete the tail.
    list <int> l5 = {1, 2, 3, 4, 5};
    l5.pop_back(); // O(1)
    for(int val: l5)
    {
        cout << val << " ";
    }
    cout << endl;

    // OUTPUT: 1 2 3 4 

    // 05. myList.pop_front() - Delete the head.
    list <int> l6 = {1, 2, 3, 4, 5};
    l6.pop_front(); // O(1)
    for(int val: l6)
    {
        cout << val << " ";
    }
    cout << endl;

    // OUTPUT: 2 3 4 5

    // 06. myList.insert() - Insert elements at a specific position.
    list <int> l7 = {1, 2, 3, 4, 5};
    l7.insert(next(l7.begin(), 2), 100); // l.insert() - O(1) , next(l.begin(), pos) - O(N)
    // O(N+K); where K is the number of elements to be inserted.
    for(int val: l7)
    {
        cout << val << " ";
    }
    cout << endl;

    // OUTPUT: 1 2 100 3 4 5

    list <int> l8 = {1, 2, 3, 4, 5};
    list <int> l9 = {100, 200, 300};
    l8.insert(next(l8.begin(), 2), l9.begin(), l9.end());
    for(int val: l8)
    {
        cout << val << " ";
    }
    cout << endl;

    // OUTPUT: 1 2 100 200 300 3 4 5

    list <int> l10 = {1, 2, 3, 4, 5};
    vector <int> v = {10, 20, 30};
    l10.insert(next(l10.begin(), 2), v.begin(), v.end());
    for(int val: l10)
    {
        cout << val << " ";
    }
    cout << endl;

    // OUTPUT: 1 2 10 20 30 3 4 5

    // 07. myList.erase() - Delete elements from a specific position.
    list <int> l11 = {1, 2, 3, 4, 5};
    l11.erase(next(l11.begin(), 2)); 
    // O(N+K); where K is the number of elements to be deleted.
    for(int val: l11)
    {
        cout << val << " ";
    }
    cout << endl;

    // OUTPUT: 1 2 4 5

    list <int> l12 = {1, 2, 3, 4, 5, 6};
    l12.erase(next(l12.begin(), 2), next(l12.begin(), 5)); 
    for(int val: l12)
    {
        cout << val << " ";
    }
    cout << endl;

    // OUTPUT: 1 2 6

    // 08. replace(myList.begin(),myList.end(),value,replace_value) - Replace all the value with replace_value. Not under a list STL.
    list <int> l13 = {10, 20, 20, 30, 40, 20, 50};
    replace(l13.begin(), l13.end(), 20, 100); // O(N)
    for(int val: l13)
    {
        cout << val << " ";
    }
    cout << endl;

    // OUTPUT: 10 100 100 30 40 100 50

    // 09. find(myList.begin(),myList.end(),V) - Find the value V. Not under a list STL.
    list <int> l14 = {1, 2, 3, 4, 5, 100};
    auto it = find(l14.begin(), l14.end(), 100); // O(N)
    if(it == l14.end())
    {
        cout << "Not Found" << endl;
    }
    else{
        cout << "Found" << endl;
    }

    // OUTPUT: Found

    return 0;
}