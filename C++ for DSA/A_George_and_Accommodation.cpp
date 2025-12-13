#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r;
    cin >> r;
    int available = 0;
    for(int i=1;i<=r;i++)
    {
        int p, q;
        cin >> p >> q;
        if((q-p) >= 2)
        {
            available++;
        }
    }
    cout << available;

    return 0;
}