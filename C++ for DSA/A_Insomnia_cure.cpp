#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    int fre[d+1];
    for(int i=0;i<=d;i++)
    {
        fre[i] = 0;
    }
    for(int i=1;i<=d;i++)
    {
        if(i%k==0 || i%l==0 || i%m==0 || i%n==0)
        {
            fre[i]++;
        }
    }
    int count = 0;
    for(int i=1;i<=d;i++)
    {
        if(fre[i]==0)
        {
            count++;
        }
    }
    cout << d - count << endl;
    return 0;
}