#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int idx_max, mx = INT_MIN;
    int idx_min, mn = INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(mx<a[i])
        {
            mx = a[i];
            idx_max = i;
        }
        else if(mx == a[i])
        {
            if(idx_max > i)
            {
                mx = a[i];
                idx_max = i;
            }
        }
        if(mn>a[i])
        {
            mn = a[i];
            idx_min = i;
        }
        else if(mn == a[i])
        {
            if(idx_min < i)
            {
                mn = a[i];
                idx_min = i;
            }
        }
    }

    int swap_max = idx_max;
    int swap_min = (n-1) - idx_min;
    int cross = 0;
    if(idx_max > idx_min)
    {
        cross = 1;
    }
    // cout << idx_max << " " << mx << " " << swap_max << endl;
    // cout << idx_min << " " << mn << " " << swap_min << endl;

    cout << (swap_max + swap_min) - cross << endl;

    return 0;
}