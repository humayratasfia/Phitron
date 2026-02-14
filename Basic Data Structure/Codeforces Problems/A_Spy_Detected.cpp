// https://codeforces.com/problemset/problem/1512/A

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
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }

        int index;
        for(int i=0, j=i+1; i<n-1; i++, j++)
        {
            if(a[0]!=a[1] && a[0]!=a[2])
            {
                index = 0;
                break;
            }
            if(a[i]!=a[j])
            {
                index = j;
                break;
            }
        }
        cout << index+1 << endl;
    }
    return 0;
}