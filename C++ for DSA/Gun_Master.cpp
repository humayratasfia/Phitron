#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i=1;i<=t;i++)
    {
        int n, d;
        cin >> n >> d;
        int a[n];
        for(int j=0;j<n;j++)
        {
            cin >> a[j];
        }

        int swtch = 0;
        if(a[0]>d)
        {
            swtch++;
        }

        for(int j=0;j<n-1;j++)
        {
            if(a[j]<=d && a[j+1]>d)
            {
                swtch++;
            }
            else if(a[j]>d && a[j+1]<=d)
            {
                swtch++;
            }
        }
        cout << swtch << endl;
    }
    
    return 0;
}