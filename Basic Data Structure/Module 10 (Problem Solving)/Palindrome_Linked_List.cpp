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
    // Insert the value of 1st linked list in 2nd linked list to make a copy.
    void insert_at_tail(ListNode* &newHead, ListNode* &newTail, int val)
    {
        ListNode* newnode = new ListNode(val);
        if(newHead == NULL)
        {
            newHead = newnode;
            newTail = newnode;
            return;
        }
        newTail->next = newnode;
        newTail = newnode;
    }

    // Reverse the 2nd linked list.
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

    bool isPalindrome(ListNode* head) {
        ListNode* newHead = NULL;
        ListNode* newTail = NULL;

        ListNode* temp = head;
        while(temp != NULL)
        {
            insert_at_tail(newHead, newTail, temp->val);
            temp = temp->next;
        }

        reverse(newHead, newHead);

        /* 
        PALINDROME CHECKER -
        Checks whether 1st linked list 
        and 2nd linked list (Reverse 
        of copy of 1st linked list) 
        are same. */
        temp = head;
        ListNode* temp2 = newHead;
        while(temp != NULL)
        {
            if(temp->val != temp2->val)
            {
                return false;
            }
            temp = temp->next;
            temp2 = temp2->next;
        }
        return true;
    }
};
// -------------------------------------------

int main()
{
    // code
    
    return 0;
}