// PROBLEM: https://www.hackerrank.com/contests/mid-term-exam-a-basic-data-structures-a-batch-08/challenges/same-or-not-ii

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    stack <int> s;
    queue <int> q;

    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        s.push(x);
    }
    for(int i=0;i<m;i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    int flag = 0;
    if(n != m)
    {
        cout << "NO" << endl;
        return 0;
    }
    else{
        while(!s.empty())
        {
            if(s.top() == q.front())
            {
                s.pop();
                q.pop();
            }
            else{
                flag = 1;
                break;
            }
        }
    }

    if(flag == 0)
    {
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}