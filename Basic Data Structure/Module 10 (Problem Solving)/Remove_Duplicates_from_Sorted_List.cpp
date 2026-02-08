// PROBLEM: https://leetcode.com/problems/remove-duplicates-from-sorted-list/description/

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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp = head;
        
        if(temp == NULL)
        {
            return head;
        }

        while(temp->next != NULL)
        {
            if(temp->val == temp->next->val)
            {
                ListNode* deleteNode = temp->next;

                temp->next = deleteNode->next;

                delete deleteNode;
            }
            else{
                temp = temp->next;
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