#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    //Time Complexity: O(N*N*N) = O(N^3)
    //Example 01:
    for(int i=1;i<=n;i++)
    {   
        for(int j=1;j<=n;j++)
        {
            for(int k=1;k<=n;k++)
            {
                cout << "Hello" << endl;
            }
        }
    }

    return 0;
}