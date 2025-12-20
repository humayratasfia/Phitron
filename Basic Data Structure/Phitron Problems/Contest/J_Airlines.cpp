//https://vjudge.net/contest/775956#problem/J

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, p;
        cin >> a >> p;
        int count = 0;
        int b = a;
        int total = b * 100;
        for(int i=1; total<p;i++)
        {
            b++;
            count++;
            total = b * 100;
        }
        cout << count << endl;
    }
    return 0;
}