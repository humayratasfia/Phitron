#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int total = 0, max = 0;
    for(int i=1;i<=n;i++)
    {
        int out, in;
        cin >> out >> in;
        total = total - out + in;
        if (total>max)
        {
            max = total;
        }
    }
    cout << max << endl;
    return 0;
}