#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i=1;i<=t;i++)
    {
        int n;
        cin >> n;
        char a[n+1];
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }

        int fre[26] = {0};
        int count = 0;
        for(int i=0;i<n;i++)
        {
            fre[a[i]-'A']++;
            // cout << a[i] << " :" << fre[a[i]-'A'] << endl;
            if(fre[a[i]-'A']==1)
            {
                count+=2;
            }
            else if(fre[a[i]-'A']!=1 && fre[a[i]-'A']>0)
            {
                count++;
            }
        }

        cout << count << endl;
    }
    return 0;
}