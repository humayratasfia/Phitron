#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int c;
        cin >> c;
        double total = (double)c / 4;
        cout << ceil(total) << endl;
    }
    return 0;
}