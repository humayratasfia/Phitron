// Leetcode Problem: https://leetcode.com/problems/sum-of-left-leaves/

#include <bits/stdc++.h>
using namespace std;

class TreeNode
{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;

    // Constructor
    TreeNode(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

//-------------------------------SOLUTION---------------------------------
class Solution {
public:
    // This variable stores the final sum of all left leaf nodes.
    int ans = 0;

    // Helper function to traverse the binary tree.
    void sum(TreeNode* root)
    {
        // Base case:
        // If the current node is NULL, stop recursion.
        if(root == NULL) return;

        // Check whether the current node has a left child.
        if(root->left)
        {
            // If the left child has no left and no right child,
            // then it is a leaf node.
            if(root->left->left == NULL && root->left->right == NULL) 
            {
                // Since it is also the LEFT child of the current node,
                // it is a LEFT LEAF, so add its value to ans.
                ans += root->left->val;
            }
        }

        // Recursively traverse the left subtree.
        sum(root->left);

        // Recursively traverse the right subtree.
        sum(root->right);
    }

    // Main function called by LeetCode
    int sumOfLeftLeaves(TreeNode* root) {
        // Start traversal from the root node.
        sum(root);

        // Return the total sum of all left leaves.
        return ans;
    }
};
//------------------------------------------------------------------------

int main()
{
    
    return 0;
}