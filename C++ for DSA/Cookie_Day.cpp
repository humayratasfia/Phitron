#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i=1;i<=t;i++)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        for(int j=0;j<n;j++)
        {
            cin >> a[j];
        }
        int min = INT_MAX;
        int found = 0;
        for(int j=0;j<n;j++)
        {
            if(a[j]>=k && (a[j]%k < min))
            {
                min = a[j] % k;
                found = 1;
            }
        }
        
        if(found == 1)
        {
            cout << min << endl;
        }
        else if(found == 0)
        {
            cout << "-1" << endl;
        }

    }
    return 0;
}