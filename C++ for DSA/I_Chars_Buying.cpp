#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i=1;i<=t;i++)
    {
        int w, p, k;
        cin >> w >> p >> k;
        int s;
        // while(k > w+p)
        // {
        //     cin >> k;
        // }
        if(w >= k)
        {
            s = k * 2;
            cout << s << endl;
        }
        else if(w < k)
        {
            s = (w * 2) + ((k - w) * 1);
            cout << s << endl;
        }
    }
    return 0;
}