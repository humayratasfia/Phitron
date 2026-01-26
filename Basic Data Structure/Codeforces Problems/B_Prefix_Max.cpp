// https://codeforces.com/contest/2185/problem/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector <int> a(n);
        
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        int max = INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(max < a[i])
            {
                max = a[i];
            }
        }

        cout << max * n << endl;
    }

    return 0;
}