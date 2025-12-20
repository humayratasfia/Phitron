//https://vjudge.net/contest/775956#problem/F

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        int sum = 0;
        for(int i=1;i<=n;i++)
        {
            int a;
            cin >> a;
            int cost = a * x;
            if(cost<=y)
            {
                sum = sum + cost;
            }
            else{
                sum = sum + y;
            }
        }
        cout << sum << endl;
    }
    return 0;
}