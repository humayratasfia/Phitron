// LeetCode Problem: https://leetcode.com/problems/univalued-binary-tree/

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
    // This function passes both the root pointer and its value to verify whether it's a uni-valued tree
    bool checkUnivalTree(TreeNode* root, int x)
    {
        if(root == NULL)
            return true;

        if(root->val != x)
            return false;
        bool l = checkUnivalTree(root->left, x);
        bool r = checkUnivalTree(root->right, x);

        return (l && r);
    }

    bool isUnivalTree(TreeNode* root) {
        return checkUnivalTree(root, root->val);
    }
};
------------------------------------------------------------------------*/