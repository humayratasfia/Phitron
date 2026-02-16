// PROBLEM: https://leetcode.com/problems/backspace-string-compare/description/

#include <bits/stdc++.h>
using namespace std;

// ---------------- Solution: ----------------
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack <char> st1; // Stores the characters of string s.
        stack <char> st2; // Stores the characters of string t.

        for(char c: s) // For string s.
        {
            if(c == '#') // If finds # and the stack is not empty:
            {
                if(!st1.empty())
                {
                    st1.pop(); // Pops the last stored character from stack.
                }
            }
            else // If finds any other character:
            {
                st1.push(c); // Pushes the character into the stack.
            }
        }
        for(char c: t) // For string t.
        {
            if(c == '#')
            {
                if(!st2.empty())
                {
                    st2.pop(); 
                }
            }
            else
            {
                st2.push(c);
            }
        }

        // After backspacing, if both stacks are same then valid or else invalid.
        return (st1 == st2); 
    }
};
// -------------------------------------------

int main()
{
    // code
    
    return 0;
}