//https://vjudge.net/contest/775956#problem/H

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a1, a2, a3, b1, b2, b3;
        cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;
        int a_c1 = a1 * 100 + a2 * 10 + a3;
        int a_c2 = a1 * 100 + a3 * 10 + a2;
        int a_c3 = a2 * 100 + a1 * 10 + a3;
        int a_c4 = a2 * 100 + a3 * 10 + a1;
        int a_c5 = a3 * 100 + a1 * 10 + a2;
        int a_c6 = a3 * 100 + a2 * 10 + a1;

        int a_max = max({a_c1,a_c2,a_c3,a_c4,a_c5,a_c6});

        int b_c1 = b1 * 100 + b2 * 10 + b3;
        int b_c2 = b1 * 100 + b3 * 10 + b2;
        int b_c3 = b2 * 100 + b1 * 10 + b3;
        int b_c4 = b2 * 100 + b3 * 10 + b1;
        int b_c5 = b3 * 100 + b1 * 10 + b2;
        int b_c6 = b3 * 100 + b2 * 10 + b1;

        int b_max = max({b_c1,b_c2,b_c3,b_c4,b_c5,b_c6});

        if(a_max < b_max)
        {
            cout << "Bob" << endl;
        }
        else if(a_max > b_max)
        {
            cout << "Alice" << endl;
        }
        else{
            cout << "Tie" << endl;
        }
    }
    return 0;
}