#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v = {1, 2, 3, 4, 5};

    // 1. v[i]
    cout << v[2] << endl; // OUTPUT: 3

    // 2. v.at(i)
    cout << v.at(2) << endl; // OUTPUT: 3

    // 3. v.back()
    cout << v.back() << endl; // OUTPUT: 5

    // 4. v.front()
    cout << v.front() << endl; // OUTPUT: 1

    return 0;
}