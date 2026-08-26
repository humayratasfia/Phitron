// LeetCode Problem: https://leetcode.com/problems/same-tree/

/************************************************************

 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };

************************************************************/

/*-------------------------------SOLUTION---------------------------------
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == NULL && q == NULL) // If both are NULL.
            return true;
        
        if(p == NULL) // If only p is NULL.
            return false;
        if(q == NULL) // If only q is NULL.
            return false;

        if(p->val != q->val) // If the value of the nodes are not equal.
            return false;

        bool l = isSameTree(p->left, q->left);
        bool r = isSameTree(p->right, q->right);

        return (l && r);
    }
};
------------------------------------------------------------------------*/