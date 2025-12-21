#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(); 
    /* need cin.ignore(); only if we use getline(cin,v[i]);
    instead of cin >> v[i]; to take string as input 
    c.ignore() ignores the enter after after taking the
    value of n. */

    vector <string> v(n);

    for(int i=0;i<n;i++)
    {
        getline(cin,v[i]); // we can also use cin >> v[i];
    }
    for(string s: v)
    {
        cout << s << endl;
    }

    return 0;
}