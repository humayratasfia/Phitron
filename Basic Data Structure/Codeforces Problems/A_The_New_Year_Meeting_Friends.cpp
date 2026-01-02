//https://codeforces.com/problemset/problem/723/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> d(3);
    for(int i=0;i<d.size();i++)
    {
        cin >> d[i];
    }
    sort(d.begin(),d.end());

    cout << d.back() - d.front() << endl;  

    // int x, y, z;
    // cin >> x >> y >> z;
    
    // int d1 = abs(y-x) + abs(z-x);
    // int d2 = abs(x-y) + abs(z-y);
    // int d3 = abs(x-z) + abs(y-z);

    // int min_d = min({d1,d2,d3});

    // cout << min_d << endl;
    
    return 0;
}