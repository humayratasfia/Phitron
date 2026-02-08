// https://codeforces.com/problemset/problem/581/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int red, blue;
    cin >> red >> blue;

    int different = min(red, blue);

    int same = (max(red, blue) - min(red, blue)) / 2;

    cout << different << " " << same << endl;

    return 0;
}