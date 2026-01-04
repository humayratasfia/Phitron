// https://www.hackerrank.com/contests/ds-course-grand-contest-selection-round/challenges/selling-online-courses-1

#include <bits/stdc++.h>
using namespace std;

int main()
{
    double x;
    cin >> x;
    if (x == 0)
    {
        cout << "0" << endl;
    }
    else
    {
        double percent20 = (2 * x) / (double)10;
        double courses = (double)100 / percent20;

        cout << (long long int)ceil(courses) << endl;
    }
    return 0;
}