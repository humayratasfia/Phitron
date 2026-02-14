// PROBLEM: https://leetcode.com/problems/remove-linked-list-elements/description/

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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* temp = head;

        while(true)
        {
            if(head == NULL) // Corner Case: Node doesn't extst.
            {
                break;
            }

            if(head->val == val) // If (head->val == val).
            {
                ListNode* deleteNode = head;
                head = head->next;
                temp = head;

                delete deleteNode;
            }
            else // If not.
            {   
                // Checks the next node's value. If the value matches then:
                if(temp->next != NULL && temp->next->val == val) 
                {
                    ListNode* deleteNode = temp->next;
                    temp->next = temp->next->next;

                    delete deleteNode;
                }
                else // If doesn't match then:
                {
                    if(temp->next == NULL) // If there is no next node.
                    {
                        break;
                    }
                    temp = temp->next; // Updates temp.
                }
            }
        }
        return head;
    }
};
// -------------------------------------------

int main()
{
    // code
    
    return 0;
}