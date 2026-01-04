// https://www.hackerrank.com/contests/ds-course-grand-contest-selection-round/challenges/first-non-repeating-character-19-2

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int len = s.size();
    int fre[26] = {0};
    for(int i=0;i<len;i++)
    {
        fre[s[i] - 'a']++;
    }
    for(int i=0;i<len+1;i++)
    {
        if(fre[s[i]-'a']==1)
        {
            cout << s[i] << endl;
            break;
        }
        if(s[i] == '\0')
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}