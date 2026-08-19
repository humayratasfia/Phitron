// CodingNinjas Problem: https://www.naukri.com/code360/problems/reverse-level-order-traversal_764339

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
#include<bits/stdc++.h>
vector<int> reverseLevelOrder(TreeNode<int> *root){
    vector <int> v;

    // Apply Level Order Traversal and push the value in a vector.
    queue <TreeNode<int>*> q;
    if(root)
    {
        q.push(root);
    }

    while(!q.empty())
    {
        // 01.
        TreeNode<int>* f = q.front();
        q.pop();

        // 02.
        v.push_back(f->val);

        // 03.
        if(f->left)
        {
            q.push(f->left);
        }
        if(f->right)
        {
            q.push(f->right);
        }
    }

    reverse(v.begin(), v.end()); // Reverse the vector and return.

    return v;
}
------------------------------------------------------------------------*/