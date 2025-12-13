#include <bits/stdc++.h>
using namespace std;

int main()
{
    int year;
    cin >> year;
    year++;
    while(true)
    {
        int a = year%10;
        int b = ((year/10)%10);
        int c = ((year/100)%10);
        int d = (year/1000);
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
        {
            cout << year << endl;
            break;
        }
        
        year++;
    }
    return 0;
}