#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    //Time Complexity: O(N*N) = O(N^2)
    //Example 01:
    for(int i=1;i<=n;i++)
    {   
        for(int j=1;j<=n;j++)
        {
            cout << "Hello" << endl;
        }
    }

    //Time Complexity: O(N*M)
    //Example 02:
    for(int i=1;i<=n;i++)
    {   
        for(int j=1;j<=m;j++)
        {
            cout << "Hello" << endl;
        }
    }

    return 0;
}