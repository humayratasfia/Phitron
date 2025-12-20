//https://vjudge.net/contest/775956#problem/C

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        
        if(m>=n)
        {
            cout << "0" << endl;
        }
        else if(m<n)
        {
            int stu = n - m;
            cout << stu << endl;
        }
    }
    return 0;
}