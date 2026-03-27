// Leetcode Problem: https://leetcode.com/problems/binary-tree-preorder-traversal/description/

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
    // Preorder Traversal
    void preorder(TreeNode* root, vector <int> &ans)
    {
        if(root == NULL) // Base case
        {
            return;
        }
        ans.push_back(root->val);
        preorder(root->left, ans);
        preorder(root->right, ans);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector <int> ans;
        preorder(root, ans);
        return ans;
    }
};
//------------------------------------------------------------------------

int main()
{
    
    return 0;
}