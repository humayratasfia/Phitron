#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i=1;i<=t;i++)
    {
        int n, x;
        cin >> n >> x;
        if(n<=x)
        {
            cout << "YES" << endl;
        }
        else if(n>x)
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}