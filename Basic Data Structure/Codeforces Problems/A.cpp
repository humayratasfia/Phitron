// https://vjudge.net/contest/843829#problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int count = 0;
        for(int i = 0, j = n-1; i<j; i++, j--)
        {
            if((s[i] == '0' && s[j] == '1') || (s[i] == '1' && s[j] == '0'))
            {
                count += 2;
            }
            else{
                break;
            }
        }
        cout << n - count << endl;
    }
    return 0;
}