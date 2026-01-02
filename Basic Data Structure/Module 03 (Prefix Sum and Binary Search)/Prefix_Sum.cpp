//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Y

// Overall Time Complexity: O(N)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector <long long int> v(n+1);
    for(int i=1;i<=n;i++) // Time Complexity: O(N)
    {
        cin >> v[i];
    }

    vector <long long int> pre(n+1);
    pre[1] = v[1];
    for(int i=2;i<=n;i++) // Time Complexity: O(N)
    {
        /* For taking input in Prefix sum array.*/
        pre[i] = pre[i-1] + v[i]; 
    }

    while(q--) // Time Complexity: O(Q)
    {
        int l, r;
        cin >> l >> r;
        long long int sum;

        if(l==1) // verifies whether the left index is 1
        {
            sum = pre[r];
        }
        else
        {
            sum = pre[r] - pre[l-1];
        }
        
        //Shows TLE:
        // for(int i=l-1;i<=r-1;i++) -> Time Complexity: O(N) (it causes the T.C to become O(Q*N))
        // {
        //     sum += v[i];
        // }

        cout << sum << endl;
    }
    return 0;
}