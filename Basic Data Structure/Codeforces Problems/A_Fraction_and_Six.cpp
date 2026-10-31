// https://codeforces.com/contest/2278/problem/A
// bruteforcemaxxing

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
        int n, m;
        cin >> n >> m;

        string p, q;
        cin >> p;
        cin >> q;

        if(m > n)
        {
            cout << "NO" << endl;
        }
        else{
            int fre[26] = {0};

            for(int i=0; i<n; i++)
            {
                fre[p[i]-97]++;
            }

            for(int i=0; i<m; i++)
            {
                fre[q[i]-97]--;
            }

            int flag1 = 0, flag2 = 0, flag3 = 0, flag4 = 0;
            for(int i=0; i<26; i++)
            {
                if(i == 8)
                {
                    if(fre[i] == 1)
                        flag1 = 1;
                }
                else if(i == 18)
                {   
                    if(fre[i] == 1)
                        flag2 = 1;
                }
                else if(i == 23)
                {
                    if(fre[i] == 1)
                        flag3 = 1;
                }
                else{
                    if(fre[i] != 0)
                        flag4 = 1;
                }
            }

            if(flag1 == 1 && flag2 == 1 && flag3 == 1 && flag4 == 0)
            {
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}