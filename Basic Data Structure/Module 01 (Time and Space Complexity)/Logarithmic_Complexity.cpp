#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    //Time Complexity: O(logN)
    //Example 01:
    for(int i=1;i<=n;i*=2)
    {
        cout << i << endl;
    }

    //Example 02:
    int k = 2;
    for(int i=1;i<=n;i++)
    {
        cout << i << endl;
        i = i * k;
    }

    return 0;
}