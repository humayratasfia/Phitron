//https://codeforces.com/problemset/problem/1335/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int a;
        cin >> a;
        long long int count = 0;

        if(a>2)
        {
            //Time Complexity: O(1)
            if(a%2==0)
            {
                count = a/2 - 1;
                cout << count << endl;
            }
            else
            {
                count = a/2;
                cout << count << endl;
            }

            //Time Complexity: O(n)
            // for(long long int b=1;b!=a;b++)
            // {
            //     a = a - 1;
            //     count++;
            // }
            // cout << count << endl;
        }
        else{
            cout << "0" << endl;
        }
        
    }
    return 0;
}