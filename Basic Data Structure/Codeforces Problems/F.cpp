// UNSOLVED: https://vjudge.net/contest/843829#problem/F

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, x;
    cin >> n >> x;
    int count = 0;

    vector <long long> a(n, 0);
    for(int i=0;i<n;i++)
    {
        cin >> a[i];

        if(a[i] == x)
            count++;
    }

    // Prefix sum
    vector <long long> sum(n, 0);
    sum[0] = a[0];
    for(int i=2; i<=n; i++)
    {
        sum[i] = sum[i-1] + a[i];
    }

    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(sum[i+j+1] - sum[j] == x)
            {
                count++;
            }
        }
    }

    cout << count << endl;
    return 0;
}