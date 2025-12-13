#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int total = 0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=a[i+1])
        {
            total++;
        }
    }

    cout << total << endl;
    
    return 0;
}