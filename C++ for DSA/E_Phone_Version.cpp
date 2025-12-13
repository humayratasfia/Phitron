#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    int digit1 = (x / 10) % 10;
    int digit2 = x % 10;

    cout << "K" << digit1 << digit2 << endl;

    return 0;
}