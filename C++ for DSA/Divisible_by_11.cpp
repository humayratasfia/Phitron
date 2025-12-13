#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin >> n;
    int len = n.size();
    int sum1 = 0;
    int sum2 = 0;
    for(int i=0;i<len;i++)
    {
        if(i%2==0)
        {
            sum1 = sum1 + (n[i] - '0');
        }
        else if(i%2!=0)
        {
            sum2 = sum2 + (n[i] - '0');
        }
    }
    // cout << sum1 << endl;
    // cout << sum2 << endl;
    int sum = abs(sum1 - sum2);
    if(sum%11==0)
    {
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}