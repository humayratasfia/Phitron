// PROBLEM: https://leetcode.com/problems/remove-nth-node-from-end-of-list/description/

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
    // Reverse the linked list.
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // At first reverse the list.
        reverse(head, head);

        // If n = 1 which is the tail of the original list.
        if(n == 1)
        {
            ListNode* deleteNode = head;
            head = head->next;

            delete deleteNode;
        }
        else // If n != 1.
        {
            ListNode* temp = head;
            for(int i=1;i<n-1;i++)
            {
                temp = temp->next;
            }
            // temp is at n-1.

            if(temp->next != NULL) 
            {
                ListNode* deleteNode = temp->next;

                temp->next = temp->next->next;
                delete deleteNode;
            }
            else // If the n is out of bound.
            {
                reverse(head, head);
                return head;
            }
        }

        if(head != NULL) // After deleting n=1 if node exists.
        {
            reverse(head, head);
        }
        // If not then it won't reverse.

        return head;
    }
};
// -------------------------------------------

int main()
{
    // code
    
    return 0;
}