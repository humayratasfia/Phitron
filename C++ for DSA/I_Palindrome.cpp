#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int len = s.length();
    string t = s;
    reverse(t.begin(), t.end());

    if(s == t)
    {
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    // int check = 0;
    // for(int i=0;i<len;i++)
    // {
    //     if(s[i] != t[i])
    //     {
    //         check = 1;
    //         break;
    //     }
    // }
    // if(check == 1)
    // {
    //     cout << "NO" << endl;
    // }
    // else if(check == 0)
    // {
    //     cout << "YES" << endl;
    // }
    return 0;
}