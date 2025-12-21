#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* 01 - size has been specified 
    (not necessary for vector) */
    int n;
    cin >> n;
    vector <int> v(n);

    for(int i=0;i<n;i++)
    {
        cin >> v[i];
    }
    for(int i=0;i<n;i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    //02 - size has not been specified 
    int m;
    cin >> m;
    vector <int> v2;

    for(int i=0;i<m;i++)
    {
        int x;
        cin >> x;
        v2.push_back(x);
    }
    for(int i=0;i<m;i++)
    {
        cout << v2[i] << " ";
    }

    return 0;
}