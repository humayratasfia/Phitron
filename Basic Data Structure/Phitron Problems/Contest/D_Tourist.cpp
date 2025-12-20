//https://vjudge.net/contest/775956#problem/D

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        int min = INT_MAX;
        for(int i=1;i<=n;i++)
        {
            int x, y;
            cin >> x >> y;
            int distance = abs(a - x) + abs(b - y);
            if(distance < min)
            {
                min = distance;
            }
        }
        cout << min << endl;
    }
    return 0;
}