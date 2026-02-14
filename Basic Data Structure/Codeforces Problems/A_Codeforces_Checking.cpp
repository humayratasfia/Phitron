// https://codeforces.com/problemset/problem/1791/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        char a;
        cin >> a;
        int flag = 0;
        string s = "codeforces";
        int len = s.size();
        for(int i=0;i<10;i++)
        {
            if(a == s[i])
            {
                flag = 1;
                break;
            }
        }
        
        if(flag == 1)
        {
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}