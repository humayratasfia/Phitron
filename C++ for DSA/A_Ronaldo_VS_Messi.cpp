#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    int messi = a*2 + b*1;
    int ronaldo = x*2 + y*1;
    
    if(messi>ronaldo)
    {
        cout << "Messi" << endl;
    }
    else if(messi<ronaldo)
    {
        cout << "Ronaldo" << endl;
    }
    else if(messi==ronaldo)
    {
        cout << "Equal" << endl;
    }

    return 0;
}