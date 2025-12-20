//https://vjudge.net/contest/775956#problem/I

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int s, x, p;
        cin >> s >> x >> p;
        int total = s * x;
        if(p > total/2)
        {
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}