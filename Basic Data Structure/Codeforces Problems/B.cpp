// https://vjudge.net/contest/843829#problem/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }

        for(int i = 0, j = n-1; i<=j; i++, j--)
        {
            if(i < j)
            {
                cout << a[i] << " " << a[j] << " ";
            }
            else{
                cout << a[i] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}