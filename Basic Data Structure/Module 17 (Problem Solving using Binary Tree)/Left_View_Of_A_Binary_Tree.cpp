// CodingNinjas Problem: https://www.naukri.com/code360/problems/left-view-of-a-binary-tree_920519

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
vector<int> getLeftView(TreeNode<int> *root)
{
    vector<int> ans; // Vector that we'll return.
    bool fre[3005] = {false}; // Frequency Array; initially frequency for all levels are false.

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
        q.pop(); // Popping from the queue after copying the values (address of current node, level of current node) we have in q.front to parent.

        // Separate the Node value (current node's address) and it's level by assigning them to two different variables.
        TreeNode<int>* node = parent.first; // has the address of current node. 
        int level = parent.second; // has level of current node.

        //02.
        // If the current node is the only node pushed in the queue from the current level 
        // then update the frequency array for that specific level to true, so the code returns 
        // the 1st or left view node from each level. 
        if(fre[level] == false)
        {
            ans.push_back(node->data);
            fre[level] = true;
        }

        //03.
        
        if(node->left) 
            q.push({node->left, level+1});
        if(node->right)
            q.push({node->right, level+1});
            
        // If not then keep traversing.
        
    }

    return ans;
}
------------------------------------------------------------------------*/