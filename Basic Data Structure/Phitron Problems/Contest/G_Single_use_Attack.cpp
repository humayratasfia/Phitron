//https://vjudge.net/contest/775956#problem/G

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int h, x, m;
        cin >> h >> x >> m;
        
        int total1 = ceil((double) h/x);
    
        int total2 = ceil((double)(h - m)/(double)x) + 1;

        int mn = min(total1,total2);
        cout << mn << endl;

    }
    return 0;
}