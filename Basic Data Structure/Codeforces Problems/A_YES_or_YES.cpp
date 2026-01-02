//https://codeforces.com/problemset/problem/1703/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        string s;
        cin >> s;
        int flag = 0;
        if((s[0]=='y' || s[0]=='Y') && (s[1]=='e' || s[1]=='E') && (s[2]=='s' || s[2]=='S'))
        {
            flag = 1;
        }
        if(flag==1)
        {
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}