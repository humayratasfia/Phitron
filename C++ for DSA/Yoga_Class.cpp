#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        int s1, s2;
        if(n%2==0)
        {
            s1 = n * x;
            s2 = (n / 2) * y;
            int mx = max(s1,s2);
            cout << mx << endl;
        }
        else if(n%2!=0)
        {
            s1 = n * x;
            s2 = (n - 1)/2 * y + 1 * x;
            int mx = max(s1,s2);
            cout << mx << endl;
        }
    }
    return 0;
}