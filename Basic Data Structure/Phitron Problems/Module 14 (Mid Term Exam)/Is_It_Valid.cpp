// PROBLEM: https://www.hackerrank.com/contests/mid-term-exam-a-basic-data-structures-a-batch-08/challenges/is-it-valid-1-1

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;

        stack <int> st;
        stack <int> st2;

        for(char c: s)
        {
            st.push(c);
        }
        while(!st.empty())
        {
            if(st.top() == '1' && !st2.empty() && st2.top() == '0')
            {
                st.pop();
                st2.pop();
            }
            else if(st.top() == '0' && !st2.empty() && st2.top() == '1')
            {
                st.pop();
                st2.pop();
            }
            else
            {
                st2.push(st.top());
                st.pop();
            }
        }

        if(st.empty() && st2.empty())
        {
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }

    }
    return 0;
}