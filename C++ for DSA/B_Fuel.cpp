#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    int distance = x * y;

    if(distance >= 100)
    {
        cout << "Yes" << endl;
    }
    else if(distance < 100)
    {
        cout << "No" << endl;
    }
    
    return 0;
}