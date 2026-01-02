//https://codeforces.com/problemset/problem/427/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int p[n];
    for(int i=0;i<n;i++)
    {
        cin >> p[i];
    }
    int available = 0;
    int untreated = 0;
    for(int i=0;i<n;i++)
    {
        if(p[i]!=-1)
        {
            available += p[i];
        }
        else if(p[i]==-1)
        {
            if(available > 0)
            {
                available--;
            }
            else{
                untreated++;
            }
        }
    }
    cout << untreated << endl;
    return 0;
}


    