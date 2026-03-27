// PROBLEM: https://www.naukri.com/code360/problems/reversing-a-queue_982934

#include <bits/stdc++.h> 
using namespace std;

// ---------------- Solution: ----------------

// Reverses the order of elements in a queue using a stack as auxiliary storage
queue<int> reverseQueue(queue<int> q)
{
    stack<int> st;
    
    // Push all queue elements onto the stack (reverses order)
    while(!q.empty())
    {
        st.push(q.front());
        q.pop();
    }

    // Pop from stack back into queue (now in reversed order)
    while(!st.empty())
    {
        q.push(st.top());
        st.pop();
    }

    return q;
}
// -------------------------------------------

int main()
{
    // code
    
    return 0;
}