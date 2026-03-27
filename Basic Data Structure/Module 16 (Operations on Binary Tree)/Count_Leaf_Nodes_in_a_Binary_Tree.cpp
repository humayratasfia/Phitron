#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int val;
    Node* left;
    Node* right;

    // Constructor
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

// Binary Tree Input Implementation.
Node* input_tree()
{
    int val;
    cin >> val; 

    Node* root;

    // If the root value is -1, the tree is empty.
    if (val == -1) // Corner case: no tree
        root = NULL;
    else
        root = new Node(val); 

    queue<Node*> q;
    if (root != NULL)
        q.push(root);

    // If root is NULL, queue stays empty and the loop will not run.
    while (!q.empty())
    {
        // 1. 
        Node* p = q.front(); // p = parent node
        q.pop();

        // 2. 
        int l, r;
        cin >> l >> r;

        Node* myLeft,* myRight;
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l); 

        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r); 
       
        p->left = myLeft;
        p->right = myRight;

        // 3. If left or right child or both exist, push it into the queue.
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }

    return root;
}

// Count Leaf Nodes in a Binary Tree.
int count_leaf_nodes(Node* root) // Using Recursion
{
    // Base case 1:
    // If the current node is NULL, there is no node here,
    // so it contributes 0 leaf nodes.
    if (root == NULL)
    {
        return 0;
    }

    // Base case 2:
    // If the current node has no left child and no right child,
    // then it is a leaf node, so return 1.
    if (root->left == NULL && root->right == NULL)
    {
        return 1;
    }

    // Recursively count leaf nodes in the left subtree.
    int l = count_leaf_nodes(root->left);

    // Recursively count leaf nodes in the right subtree.
    int r = count_leaf_nodes(root->right);

    // Total leaf nodes = left subtree leaf nodes + right subtree leaf nodes.
    // We do not add +1 here because the current node is NOT a leaf node.
    return l + r;
}

int main()
{
    Node* root = input_tree();
    cout << count_leaf_nodes(root);
    
    return 0;
}