#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        int match = n - 1;
        if(match >= m)
        {
            cout << "YES" << endl;
        }
        else if(match < m)
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}