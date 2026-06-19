#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 01.
    pair <int, int> p; // Here "pair" creates a pair of two integer values.
    p = make_pair(2, 3); // make_pair is used to assign the values.

    cout << p.first << endl; // p.first to print the first value of pair p.
    cout << p.second << endl; // p.second to print the second value of pair p.

    // 02. pair in vector
    int n;
    cin >> n;
    vector <pair <int, int>> v(n);

    for(int i=0;i<n;i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    for(int i=0;i<n;i++)
    {
        cout << v[i].first << " " << v[i].second;
    }
    return 0;
}