#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i=1;i<=t;i++)
    {
        int n;
        cin >> n;
        double a[n];
        for(int j=0;j<n;j++)
        {
            cin >> a[j];
        }
        int room = 0;
        
        for(int j=0;j<n;j++)
        {
            room = room + ceil(a[j]/2);
        }
        cout << room << endl;
        
    }
    return 0;
}