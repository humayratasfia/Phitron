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

// Count Nodes in a Binary Tree.
int count_nodes(Node* root) // Using Recursion
{
    // Base case:
    // If the current node is NULL, it means there is no node here.
    // So contribute 0 to the total count.
    if (root == NULL)
    {
        return 0;
    }

    // Recursively count nodes in the left subtree.
    int l = count_nodes(root->left);

    // Recursively count nodes in the right subtree.
    int r = count_nodes(root->right);

    // Total nodes = left subtree nodes + right subtree nodes + 1 (current node).
    return l + r + 1;
}

int main()
{
    Node* root = input_tree();
    cout << count_nodes(root);

    return 0;
}