// PROBLEM: https://leetcode.com/problems/delete-node-in-a-linked-list/

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
    // Gives access only to the node that will be deleted.
    void deleteNode(ListNode* node) {
        // Corner case: If the target node is the last node.
        if(node->next == NULL)
        {
            delete node;
            return;
        }
        // If the target node is not the last node:
        // Change the value of the node into next node's value.
        node->val = node->next->val; 

        // Connect the node with node->next->next.
        node->next = node->next->next;
    }
};
// -------------------------------------------

int main()
{
    // code
    
    return 0;
}