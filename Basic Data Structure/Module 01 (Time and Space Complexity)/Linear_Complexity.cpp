#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    //Time Complexity: O(N)
    //Example 01:
    for(int i=1;i<=n;i++)
    {
        cout << i << endl;
    }

    //Example 02:
    for(int i=1;i<=n/2;i++)
    {
        cout << i << endl;
    }

    //Example 03:
    for(int i=1;i<=n;i+=2)
    {
        cout << i << endl;
    }
    return 0;
}