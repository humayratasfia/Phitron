#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int len = s.size();
        int fre[26] = {0};
        for(int i=0;i<len;i++)
        {
            fre[s[i]-'a']++;
        }

        int count1 = 0;
        for(int i=0;i<26;i++)
        {
            if(fre[i]%2!=0 && fre[i]!=0)
            {
                count1++;
            }
        }
        
        if(count1 == 0)
        {
            cout << "0" << endl;
        }
        else if(count1 == 1)
        {
            cout << "0" << endl;
        }
        else if(count1 > 1)
        {
            cout << count1 - 1 << endl;
        }
    }
    return 0;
}