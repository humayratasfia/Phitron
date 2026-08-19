// CodingNinjas Problem: https://www.naukri.com/code360/problems/special-binary-tree_920502

/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

/*-------------------------------SOLUTION---------------------------------
bool isSpecialBinaryTree(BinaryTreeNode<int>* root)
{
    // Special Binary Tree - parent node has either 2 children or 0 child.
    if(root == NULL)
        return true;
    if((root->left != NULL && root->right == NULL)||(root->left == NULL && root->right != NULL))
        return false;

    bool l = isSpecialBinaryTree(root->left);
    bool r = isSpecialBinaryTree(root->right);

    // If true for both left and right, return true.
    return l && r;
}
------------------------------------------------------------------------*/