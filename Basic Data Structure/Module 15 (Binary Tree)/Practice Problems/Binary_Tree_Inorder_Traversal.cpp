// Leetcode Problem: https://leetcode.com/problems/binary-tree-inorder-traversal/

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
    // Inorder Traversal
    void inorder(TreeNode* root, vector <int> &ans)
    {
        if(root == NULL) // Base case
        {
            return;
        }
        inorder(root->left, ans);
        ans.push_back(root->val);
        inorder(root->right, ans);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector <int> ans;
        inorder(root, ans);
        return ans;
    }
};
//------------------------------------------------------------------------

int main()
{
    
    return 0;
}