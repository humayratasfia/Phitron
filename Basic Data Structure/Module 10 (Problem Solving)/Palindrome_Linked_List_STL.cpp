// PROBLEM: https://leetcode.com/problems/palindrome-linked-list/description/

#include <bits/stdc++.h>
using namespace std;
class ListNode
{
    public:
    int val;
    ListNode* next;

    // Constructor
    ListNode(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

// ---------------- Solution: ----------------
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        // Inserts the values of linked list in vector v.
        vector <int> v;
        ListNode* temp = head;
        while(temp != NULL)
        {
            v.push_back(temp->val);
            temp = temp->next;
        }

        // Copies vector v in vector v2.
        vector <int> v2;
        v2 = v;
        reverse(v2.begin(), v2.end()); // Reverse v2.

        // If v and v2 (reverse of v) are same - Palindrome or else not.
        return (v == v2);
    }
};
// -------------------------------------------

int main()
{
    // code
    
    return 0;
}