#include <bits/stdc++.h>
using namespace std;

// Stack - implemented by using STL list.
class myStack
{
    public:
        list <int> l;

        void push(int val) // st.push()
        {
            l.push_back(val);
        }
        void pop() // st.pop()
        {
            l.pop_back();
        }
        int top() // st.top()
        {
            return l.back();
        }
        int size() // st.size()
        {
            return l.size();
        }
        bool empty() // st.empty()
        {
            return l.empty();
        }
};

int main()
{
    myStack st;

    // Stack Input:
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    // Stack Output:
    while(!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}