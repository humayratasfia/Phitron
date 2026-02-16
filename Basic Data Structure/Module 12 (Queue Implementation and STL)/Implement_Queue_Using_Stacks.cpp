// PROBLEM: https://leetcode.com/problems/implement-queue-using-stacks/

#include <bits/stdc++.h>
using namespace std;

//----------------------SOLUTION--------------------------
class MyQueue {
public:
    stack <int> st;

    MyQueue() {
        
    }
    
    void push(int x) { // O(1)
        st.push(x);
    }
    
    int pop() { // O(N)
        stack <int> st2;
        int val;
        // Pop and pass until st is empty.
        while(!st.empty()) 
        {
            val = st.top();
            st.pop();
            if(st.empty() == true)
            {
                break;
            }
            st2.push(val);
        }
        // Transfer values in st2 back to st.
        while(!st2.empty())
        {
            st.push(st2.top());
            st2.pop();
        }
        return val; // Return the popped value (front of Queue).
    }
    
    int peek() { // O(N)
        stack <int> st2;
        int front;
        
        // Transfer st to st2.
        while(!st.empty())
        {
            st2.push(st.top());
            st.pop();
        }
        front = st2.top(); // Track the front() of the Queue.
        // Transfer back st2 to st.
        while(!st2.empty())
        {
            st.push(st2.top());
            st2.pop();
        }
        return front; // Return front() of the Queue.
    }
    
    bool empty() { // O(1)
        return st.empty();
    }
};
//--------------------------------------------------------
int main()
{
    
    return 0;
}