// https://www.hackerrank.com/contests/ds-course-grand-contest-selection-round/challenges/robots-against-aliens-equal-strength
// unsolved

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;
    int a[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin >> a[i][j];
        }
    }

    int flag = 0;
    int add[r];
    int check[r];
    for(int i=0;i<r;i++)
    {
        add[i] = 0;
        check[i] = 0;
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            add[i] += a[i][j];
            if(a[i][j] == 0)
            {
                check[i] = 1;
                flag++;
                break;
            }
        }
    }

    int sum = 0;
    for(int i=0;i<r;i++)
    {
        if(check[i] == 0)
        {
            sum = add[i];
            break;
        }
    }
    int flag1 = 0;
    for(int i=0;i<r;i++)
    {
        if(check[i] == 0)
        {
            if(add[i]!=sum)
            {
                flag1++;
            }
        }
    }

    if(r == 1)
    {
        cout << "YES" << endl;
    }
    else if(flag == r - 1)
    {
        cout << "YES" << endl;
    }
    else if(r - flag - flag1 == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}