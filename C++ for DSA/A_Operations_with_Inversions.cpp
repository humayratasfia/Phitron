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
        int count = 0;
        int mx = a[0];
        for(int i=0;i<n;i++)
        {
            if(mx>a[i])
            {
                count++;
            }
            else if(a[i]>mx)
            {
                mx = a[i];
            }
        }
        cout << count << endl;
    }
    return 0;
}