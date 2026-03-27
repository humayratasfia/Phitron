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

// Get Maximum Height of a Binary Tree.
int max_height(Node* root)
{
    if(root == NULL)
    {
        return 0;
    }
    if(root->left == NULL && root->right == NULL)
    {
        return 0;
    }
    int l = max_height(root->left);
    int r = max_height(root->right);

    return max(l, r) + 1;
}

int main()
{
    Node* root = input_tree();
    cout << max_height(root);
    
    return 0;
}