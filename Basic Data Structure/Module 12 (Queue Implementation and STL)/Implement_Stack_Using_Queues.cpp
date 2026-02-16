// PROBLEM: https://leetcode.com/problems/implement-stack-using-queues/

#include <bits/stdc++.h>
using namespace std;

//----------------------SOLUTION--------------------------
class MyStack {
public:
    queue <int> q; // Declaring 1st queue - q.

    MyStack() {
        
    }
    
    void push(int x) { // O(1)
        q.push(x);
    }
    
    int pop() { // O(N)
        queue <int> q2; // Declaring 2nd queue - q2.
        int val;
        while(!q.empty()) // Runs the loop until q is empty. 
        {
            val = q.front(); // Stores the value of front of q in val.
            q.pop(); // Pops the front value (it's a queue that's why).
            if(q.empty() == true) // Checks whether the q is empty.
            {
                break; // If empty then doesn't push the last value instead stops.
            }
            q2.push(val); // If not empty the pushes val in q2.

            /* If poping a value makes q empty 
            (that means it reached the last value/ top in a stack. 
            In stack last value is popped) then it doesn't push that
            value in q2 (POV of stack: top value popped) */
        }
        q = q2; // Copy and pastes q2 in q.
        return val; // Returns the popped value of the stack (top of stack but back/last value of queue).
    }
    
    int top() { // O(1)
        return q.back();
    }
    
    bool empty() { // O(1)
        return q.empty();
    }
};
//--------------------------------------------------------
int main()
{
    
    return 0;
}