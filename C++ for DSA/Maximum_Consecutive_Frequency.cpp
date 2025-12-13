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
    int best = 0;
    int number = 0;
    int count = 1;
    for(int i=0;i<n;i++)
    { 
        if(a[i]==a[i+1])
        {
            count++;
        }
        else if(a[i]!=a[i+1])
        {
            if(count > best)
            {
                number = a[i];
                best = count;
            }
            count = 1;
        }
    }
    cout << number << " " << best << endl;
    return 0;
}