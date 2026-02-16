// PROBLEM: https://leetcode.com/problems/valid-parentheses/description/

#include <bits/stdc++.h>
using namespace std;

// ---------------- Solution: ----------------
class Solution {
public:
    bool isValid(string s) {
        stack <char> st; // Declaring a stack for storing opening brackets.
        for(char c: s)
        {
            // If we get Opening bracket - push in the stack.
            if(c == '(' || c == '{' || c == '[')
            {
                st.push(c);
            }
            else // else if Closing bracket - 
            {
                // Check if there is any Opening bracket stored in stack.
                if(st.empty()) // No bracket present in stack.
                {
                    return false; // No brackets - stack empty - invalid.
                }
                else // Bracket present.
                {
                    // Check whether the closing bracket and the opening bracket (top of stack) matches.
                    // If matches then - pop the top of stack to go for the next checking.
                    if(c == ')' && st.top() == '(') 
                        st.pop();
                    else if(c == '}' && st.top() == '{')
                        st.pop();
                    else if(c == ']' && st.top() == '[')
                        st.pop();
                    else // If not then - invalid.
                        return false;
                }
            }
        }
        if(st.empty()) // After completing checking the string till end, if stack is empty: valid (true).
            return true;
        else // If the checking is done but the stack still have some Opening brackets: invalid (false).
            return false;
    }
};
// -------------------------------------------

int main()
{
    // code
    
    return 0;
}