// PROBLEM: https://www.naukri.com/code360/problems/insert-an-element-at-its-bottom-in-a-given-stack_1171166

#include <bits/stdc++.h> 
using namespace std;

// ---------------- Solution: ----------------

// Inserts element x at the bottom of the stack
stack <int> pushAtBottom(stack<int>& st, int x) 
{
    stack <int> new_st;

    // Transfer all elements to a temporary stack (reverses order)
    while(!st.empty())
    {
        new_st.push(st.top());
        st.pop();
    }

    // Push x at the "bottom" (now on top of the reversed stack)
    new_st.push(x);

    // Transfer everything back to the original stack
    while(!new_st.empty())
    {
        st.push(new_st.top());
        new_st.pop();
    }

    return st;
}
// -------------------------------------------

int main()
{
    // code
    
    return 0;
}