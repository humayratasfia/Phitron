//https://codeforces.com/problemset/problem/630/A
//unsolved

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long long int pw = pow(5,n);
    cout << pw % 100 << endl;
    return 0;
}