#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, l;
    cin >> n >> l;
    int h[n];
    for(int i=0;i<n;i++)
    {
        cin >> h[i];
    }
    int width = 0;
    for(int i=0;i<n;i++)
    {
        if(h[i]<=l)
        {
            width++;
        }
        else if(h[i]>l)
        {
            width+=2;
        }
    }
    cout << width << endl;
    return 0;
}