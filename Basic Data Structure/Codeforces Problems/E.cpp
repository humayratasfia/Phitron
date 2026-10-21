// https://vjudge.net/contest/843829#problem/E

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
        vector <long long> a(n+1, 0);
        for(int i=1;i<=n;i++)
        {
            cin >> a[i];
        }

        vector <long long> c(n+1, 0);
        c[a[1]] = 1;
        int flag = 0;
        for(int i=2;i<=n;i++)
        {
            c[a[i]] = 1;

            if(a[i] == n && c[a[i]-1] == 0)
            {
                flag = 1;
                break;
            }
            else if(a[i] == 1 && c[a[i]+1] == 0)
            {
                flag = 1;
                break;
            }
            else if(c[a[i]+1] == 0 && c[a[i]-1] == 0)
            {
                flag = 1;
                break;
            }
        }

        if(flag == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}