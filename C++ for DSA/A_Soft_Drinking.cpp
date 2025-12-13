#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int nl_t = (k * l) / nl;
    int lime = (c * d);
    int np_t = p / np;
    int toast = min({nl_t,lime,np_t}) / n;

    cout << toast << endl;
    
    return 0;
}