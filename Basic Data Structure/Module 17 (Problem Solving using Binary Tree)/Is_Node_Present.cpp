// CodingNinjas Problem: https://www.naukri.com/code360/problems/code-find-a-node_5682

/************************************************************

    Following is the Binary Tree node structure

    template <typename T>
    class BinaryTreeNode
    {
        public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data)
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

/*-------------------------------SOLUTION---------------------------------
bool isNodePresent(BinaryTreeNode<int> *root, int x) {
    if(root == NULL)
    {
        return false;
    }

    if(root->data == x)
    {
        return true;
    }

    bool l = isNodePresent(root->left, x);
    bool r = isNodePresent(root->right, x);

    // if(l == true || r == true)
    //     return true
    // else
    //     return false;
    return (l || r);
    
}
------------------------------------------------------------------------*/