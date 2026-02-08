// PROBLEM: https://leetcode.com/problems/linked-list-cycle/description/

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
    bool hasCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;

        bool flag = false;
        while(fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast)
            {
                flag = true;
                break;
            }
        }
        return flag;
    }
};
// -------------------------------------------

int main()
{
    // code
    
    return 0;
}