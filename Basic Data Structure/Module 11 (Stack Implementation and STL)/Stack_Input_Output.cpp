#include <bits/stdc++.h>
using namespace std;

// Stack - implemented by using vector (dynamic array).
class myStack
{
    public:
        vector <int> v;

        void push(int val) // st.push()
        {
            v.push_back(val);
        }
        void pop() // st.pop()
        {
            v.pop_back();
        }
        int top() // st.top()
        {
            return v.back();
        }
        int size() // st.size()
        {
            return v.size();
        }
        bool empty() // st.empty()
        {
            return v.empty();
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