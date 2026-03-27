// Leetcode Problem: https://leetcode.com/problems/binary-tree-postorder-traversal/

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
    // Postorder Traversal
    void postorder(TreeNode* root, vector <int> &ans)
    {
        if(root == NULL) // Base case
        {
            return;
        }
        postorder(root->left, ans);
        postorder(root->right, ans);
        ans.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector <int> ans;
        postorder(root, ans);
        return ans;
    }
};
//------------------------------------------------------------------------

int main()
{
    
    return 0;
}