#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i=1;i<=t;i++)
    {
        int n, x;
        cin >> n >> x;

        int a[n];
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        int sum;
        int flag = 0;
        for(int j=0;j<n-2;j++)
        {
            for(int k=j+1;k<n-1;k++)
            {
                for(int l=k+1;l<n;l++)
                {
                    sum = a[j] + a[k] + a[l];
                    if(sum == x)
                    {
                        flag = 1;
                    }
                }
            }
        }

        if(flag == 1)
        {
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}