#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int p;
    cin >> p;
    int a[p];
    for(int i=0;i<p;i++)
    {
        cin >> a[i];
    }
    int q;
    cin >> q;
    int b[q];
    for(int i=0;i<q;i++)
    {
        cin >> b[i];
    }
    int fre[n+1];
    for(int i=0;i<n+1;i++)
    {
        fre[i] = 0;
    }
    for(int i=0;i<p;i++)
    {
        fre[a[i]]++;
    }
    for(int i=0;i<q;i++)
    {
        fre[b[i]]++;
    }
    int check = 0;
    for(int i=1;i<=n;i++)
    {
        if(fre[i]==0)
        {
            check = 1;
        }
    }
    if(check == 0)
    {
        cout << "I become the guy." << endl;
    }
    else{
        cout << "Oh, my keyboard!" << endl;
    }
    return 0;
}



