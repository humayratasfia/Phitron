// LeetCode Problem: https://leetcode.com/problems/leaf-similar-trees/

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
    // Note: Returning vector values took more time and space. Keep 
    // the data type of the function void and use pass by reference to 
    // update the value of the vectors.
    
    void returnLeaves(TreeNode* root, vector <int> &v)
    {   
        if(root == NULL)
            return;
        if(root->left == NULL && root->right == NULL)
            v.push_back(root->val);

        returnLeaves(root->left, v);
        returnLeaves(root->right, v);
    }
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector <int> v1, v2;
        returnLeaves(root1, v1);
        returnLeaves(root2, v2);

        return (v1 == v2);
    }
};
------------------------------------------------------------------------*/