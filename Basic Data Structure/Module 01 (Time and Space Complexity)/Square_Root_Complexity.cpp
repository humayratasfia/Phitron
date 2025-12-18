#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    //Time Complexity: O(sqrt(N))
    //Example 01:
    for(int i=1;i<=sqrt(n);i++)
    {
        cout << i << endl;
    }

    //Example 02:
    //O(N)
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            cout << i << " ";
        }
    }
    cout << endl;

    //O(sqrt(N))
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            cout << i << " " << n/i << " ";
        }
    }
    cout << endl;

    //Example 03:
    for(int i=1;i*i<=n;i++)
    {
        cout << i << " " << n/i << " ";
    }
    return 0;
}