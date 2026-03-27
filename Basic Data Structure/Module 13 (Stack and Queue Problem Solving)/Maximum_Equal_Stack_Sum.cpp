// PROBLEM: https://www.naukri.com/code360/problems/maximum-equal-stack-sum_1062571

#include <bits/stdc++.h> 
using namespace std;

// ---------------- Solution: ----------------

// Returns the sum of all elements in a stack (passed by value to avoid modifying original)
int getsum(stack<int> st)
{
    int sum = 0;
    while(!st.empty())
    {
        sum += st.top();
        st.pop();
    }

    return sum;
}

// Finds the maximum equal sum achievable across all three stacks by only popping elements
int maxSum(stack<int> &st1, stack<int> &st2, stack<int> &st3) {

    // Calculate initial sums for each stack
    int sum1 = getsum(st1);
    int sum2 = getsum(st2);
    int sum3 = getsum(st3);

    // Here, to make the sum of all the stacks equal we can only pop, not push.
    // At first we have to remove value from the stack having max sum then compare all the sum.

    while(true)
    {
        // All sums are equal, we found our answer
        if(sum1 == sum2 && sum2 == sum3)
        {
            break;
        }
        // st1 has the largest sum, pop its top element
        else if(sum1 >= sum2 && sum1 >= sum3)
        {
            sum1 -= st1.top();
            st1.pop();
        }
        // st2 has the largest sum, pop its top element
        else if(sum2 >= sum1 && sum2 >= sum3)
        {
            sum2 -= st2.top();
            st2.pop();
        }
        // st3 has the largest sum, pop its top element
        else if(sum3 >= sum1 && sum3 >= sum2)
        {
            sum3 -= st3.top();
            st3.pop();
        }
    }

    return sum1; // All sums are equal at this point, return any
}
// -------------------------------------------

int main()
{
    // code
    
    return 0;
}