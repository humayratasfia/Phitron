//https://www.hackerrank.com/contests/assignment-01-a-basic-data-structure-a-batch-08/challenges/get-prefix-sum

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;

    long long int a[n+1];

    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
    }

    long long int pre[n+1];
    pre[1] = a[1];

    for(int i=2;i<=n;i++)
    {
        pre[i] = pre[i-1] + a[i];
    }

    reverse(pre,pre+(n+1));

    for(int i=0;i<n;i++)
    {
        cout << pre[i] << " ";
    }
    
    return 0;
}