// PROBLEM: https://leetcode.com/problems/reverse-linked-list/description/

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
    void reverse(ListNode* &head, ListNode* temp)
    {
        if(temp->next == NULL)
        {
            head = temp;
            return;
        }
        reverse(head, temp->next);
        temp->next->next = temp;
        temp->next = NULL;
    }
    ListNode* reverseList(ListNode* head) {
        if(head == NULL)
        {
            return head;
        }
        reverse(head, head);
        return head;
    }
};
// -------------------------------------------

int main()
{
    // code
    
    return 0;
}