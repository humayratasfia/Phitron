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
    myStack st; // Static object - that's why asterisk (*) symbol is not necessary.

    st.push(10); // Push 10
    st.push(20); // Push 20
    st.push(30); // Push 30

    cout << st.top() << endl; // 30

    st.pop(); // Pop 30
    cout << st.top() << endl; // 20

    st.pop(); // Pop 20
    cout << st.top() << endl; // 10

    /* 
    We must check whether the stack is empty 
    everytime we pop or access the top!
    */

    // Checks if the stack is empty or not.
    if(st.empty() == false) // false 
    {
        st.pop(); // Pop 10
    }

    if(st.empty() == false) // true
    {
        cout << st.top() << endl;
    }

    return 0;
}