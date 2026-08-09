// CodingNinjas Problem: https://www.naukri.com/code360/problems/code-find-a-node_5682

/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        bool isOriginal;
        TreeNode<T> *left;
        TreeNode<T> *right;
        
        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

/*-------------------------------SOLUTION---------------------------------
int nodeLevel(TreeNode<int>* root, int searchedValue)
{
    queue <pair<TreeNode<int>*, int >> q;

    // Executes only if a node exist.
    if(root != NULL)
    {
        q.push({root, 1}); // level of root node is 1.
    }

    while(!q.empty())
    {   // All the comments are written based on 1st iteration.
        //01.
        pair<TreeNode<int>*, int> parent = q.front();
        q.pop(); // Popping from the queue after copying the values (address of root, level of root) we have in q.front to parent.

        // Separate the Node value (root's address) and it's level by assigning them to two different variables.
        TreeNode<int>* node = parent.first; // has the address of root. 
        int level = parent.second; // has level of root.

        //02.
        if(node->val == searchedValue)
        {
            return level; // If value of the address in node (root's address) matches then print it's level.
        }

        //03.
        // If doesn't match then push the left and right of the node (root) 
        // and continue the loop for them to get the SearchedValue.
        if(node->left) 
            q.push({node->left, level+1});
        if(node->right)
            q.push({node->right, level+1});
            
        // If not then keep traversing.
        
    }
}
------------------------------------------------------------------------*/