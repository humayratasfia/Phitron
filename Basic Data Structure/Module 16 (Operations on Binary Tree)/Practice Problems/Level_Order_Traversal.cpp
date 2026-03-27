// CodeNinjas Problem: https://www.naukri.com/code360/problems/level-order-traversal_796002

/************************************************************

    Following is the BinaryTreeNode class structure

    template <typename T>
    class BinaryTreeNode {
       public:
        T val;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

/*-------------------------------SOLUTION---------------------------------
vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    queue <BinaryTreeNode<int> *> q;
    if(root != NULL)
        q.push(root);
    vector <int> ans;

    while(!q.empty())
    {
        // 1.
        BinaryTreeNode<int> * f = q.front();
        q.pop();

        // 2.
        ans.push_back(f->val);

        // 3.
        if(f->left)
            q.push(f->left);
        if(f->right)
            q.push(f->right);

    }

    return ans;
}
------------------------------------------------------------------------*/