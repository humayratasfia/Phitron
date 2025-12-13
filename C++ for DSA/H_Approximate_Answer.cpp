#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, k;
    cin >> x >> y >> k;
    int value = abs(x - y);
    if(value <= k)
    {
        cout << "Yes" << endl;
    }
    else if(value > k)
    {
        cout << "No" << endl;
    }
    return 0;
}