// https://vjudge.net/contest/843829#problem/D

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, q;
    cin >> n >> q;

    vector <long long> a(n+1, 0);
    // a[0] = 0;
    for(int i=1; i<=n; i++)
    {
        cin >> a[i];
    }

    // Prefix sum
    vector <long long> sum(n+1, 0);
    sum[1] = a[1];
    for(int i=2; i<=n; i++)
    {
        sum[i] = sum[i-1] + a[i];
    }

    while(q--)
    {
        int l, h;
        cin >> l >> h;
        cout << sum[h] - sum[l-1] << endl;
    }
    return 0;
}