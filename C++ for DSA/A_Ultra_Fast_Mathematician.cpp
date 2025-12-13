#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    string b;

    cin >> a ;
    cin >> b ;
    int len = a.size();
    for(int i=0;i<len;i++)
    {
        if(a[i]==b[i])
        {
            cout << "0" ;
        }
        else if(a[i]!=b[i])
        {
            cout << "1" ;
        }
    }
    return 0;
}