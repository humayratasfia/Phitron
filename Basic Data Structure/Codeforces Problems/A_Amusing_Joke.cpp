//https://codeforces.com/problemset/problem/141/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b, c;
    cin >> a >> b >> c;
    int fre1[26] = {0};
    int fre2[26] = {0};
    for(int i=0;i<a.size();i++)
    {
        fre1[a[i]-'A']++;
    }
    for(int i=0;i<b.size();i++)
    {
        fre1[b[i]-'A']++;
    }
    for(int i=0;i<c.size();i++)
    {
        fre2[c[i]-'A']++;
    }
    int flag = 0;
    for(int i=0;i<26;i++)
    {
        if(fre1[i]!=fre2[i])
        {
            flag = 1;
            break;
        }
    }
    if(flag==0)
    {
        cout << "YES" << endl;
    }
    else if(flag==1)
    {
        cout << "NO" << endl;
    }
    return 0;
}