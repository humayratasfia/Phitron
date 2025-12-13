#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cout << "I ";
        if(i%2!=0)
        {
            cout << "hate ";
        }
        else if(i%2==0)
        {
            cout << "love ";
        }
        if(i<n)
        {
            cout << "that ";
        }
        else if(i==n)
        {
            cout << "it";
        }
    }
    return 0;
}