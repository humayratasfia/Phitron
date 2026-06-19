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
    {
        //01.
        pair<TreeNode<int>*, int> parent = q.front();
        q.pop(); // Popping from the queue after assigning the front value and the level in a pair variable.

        // Separate the Node value and it's level by assigning them to tw different variables.
        TreeNode<int>* node = parent.first;
        int level = parent.second;

        //02.
        if(node->val == searchedValue)
        {
            return level; // If value matches then print it's level.
        }

        //03.
        if(node->left)
            q.push({node->left, level+1});
        if(node->right)
            q.push({node->right, level+1});
            
        // If not then keep traversing.
        
    }
}
------------------------------------------------------------------------*/