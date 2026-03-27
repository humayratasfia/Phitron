// CodeNinjas Problem: https://www.naukri.com/code360/problems/count-leaf-nodes_893055

/**********************************************************

    Following is the Binary Tree Node class structure:

    template <typename T>
    class BinaryTreeNode {
      public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
                this -> data = data;
                left = NULL;
                right = NULL;
        }
    };
    
***********************************************************/

/*-------------------------------SOLUTION---------------------------------
int noOfLeafNodes(BinaryTreeNode<int> *root){
    if(root == NULL)
    {
        return 0;
    }
    if(root->left == NULL && root->right == NULL)
    {
        return 1;
    }

    int l = noOfLeafNodes(root->left);
    int r = noOfLeafNodes(root->right);

    return l+r;
}
------------------------------------------------------------------------*/