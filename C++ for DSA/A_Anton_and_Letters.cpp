#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    int len = s.length();
    int fre[26] = {0};
    for(int i=0;i<len;i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            fre[s[i]-'a']++;
        }
    }
    int count = 0;
    for(int i=0;i<26;i++)
    {
        if(fre[i]!=0)
        {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}