#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    //Time Complexity: O(NlogN) = O(N) * O(logN)
    //Example 01:

    //O(N)
    for(int i=1;i<=n;i++)
    {   
        //O(logN)
        for(int j=1;j<=n;j*=2)
        {
            cout << "Hello" << endl;
        }
    }

    //Example 02:

    //O(N)
    int a[n];
    for(int i=1;i<n;i++)
    {
        cin >> a[i];
    }
    //O(NlogN)
    sort(a,a+n);
    
    return 0;
}