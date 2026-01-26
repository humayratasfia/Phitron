// https://www.hackerrank.com/contests/assignment-01-a-basic-data-structure-a-batch-08/challenges/duplicate-12

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long long int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }

    sort(a,a+n);
    
    int duplicate = 0;
    for(int i=0;i<n;i++)
    {
        if(a[i] == a[i+1])
        {
            duplicate = 1;
        }
    }

    if(duplicate == 1)
    {
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}