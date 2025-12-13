#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    double d[n];
    double sum = 0;
    for(int i=0;i<n;i++)
    {
        cin >> d[i];
    }
    for(int i=0;i<n;i++)
    {
        sum = sum + d[i];
    }
    cout << fixed << setprecision(12) << sum/n << endl;
    return 0;
}