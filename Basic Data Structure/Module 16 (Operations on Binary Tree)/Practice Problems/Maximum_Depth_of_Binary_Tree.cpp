// Leetcode Problem: https://leetcode.com/problems/maximum-depth-of-binary-tree/

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
    int maxDepth(TreeNode* root) {
        if(root == NULL)
        {
            return 0;
        }
        if(root->left == NULL && root->right == NULL)
        {
            return 1;
        }

        int l = maxDepth(root->left);
        int r = maxDepth(root->right);

        return max(l, r) + 1; // In this problem depth of root is 1.
    }
};
//------------------------------------------------------------------------

int main()
{
    
    return 0;
}