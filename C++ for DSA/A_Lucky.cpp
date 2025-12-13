#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i=1;i<=t;i++)
    {
        string a;
        cin >> a ;
        int sum = a[0] + a[1] + a[2];
        int sum2 = a[3] + a[4] + a[5];

        if(sum == sum2)
        {
            cout << "YES" << endl;
        }
        else if(sum != sum2)
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}