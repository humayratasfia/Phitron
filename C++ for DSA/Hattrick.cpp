#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        char a[6];
        for (int j = 0; j < 6; j++)
        {
            cin >> a[j];
        }
        int flag = 0;
        for (int j = 0; j < 6; j++)
        {
            if (a[j] == 'W' && a[j + 1] == 'W' && a[j + 2] == 'W')
            {
                flag = 1;
            }
        }
        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else if (flag == 0)
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}