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
        char a[n];
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        
        int count = 0;
        for(int i=0;i<n;i++)
        {
            if(a[i] == '0')
            {
                count++;
            }
            else if(a[i] == '1')
            {
                break;
            }
        }
        cout << count << endl;
    }
    return 0;
}