//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Z

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    int a[n];
    for(int i=0;i<n;i++) // T.C: O(N)
    {
        cin >> a[i];
    }

    sort(a,a+n); // T.C: O(NlogN)

    for(int i=0;i<q;i++) // T.C: O(Q)
    {
        int val;
        cin >> val;
        int flag = 0;

        int l = 0;
        int r = n-1;
        while(l <= r) // T.C: O(logN)
        {
            int mid = (l+r)/2;
            if(a[mid] == val)
            {
                flag = 1;
                break;
            }
            else if(a[mid] > val)
            {
                r = mid-1;
            }
            else
            {
                l = mid+1;
            }
        }

        // for(int j=0;j<n;j++) // T.C: O(N) (Causes the T.C to become O(Q*N))
        // {
        //     if(a[j] == x)
        //     {
        //         flag = 1;
        //     }
        // }

        if(flag == 1)
        {
            cout << "found" << endl;
        }
        else{
            cout << "not found" << endl;
        }
    }
    return 0;
}
