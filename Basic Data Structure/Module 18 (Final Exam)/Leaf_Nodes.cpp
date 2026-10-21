// 02: https://www.hackerrank.com/contests/final-exam-a-basic-data-structure-a-batch-08/challenges/leaf-nodes-1/problem

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
    cin >> val; // Read the value of the root node

    Node* root;

    // If the root value is -1, the tree is empty
    if (val == -1) // Corner case: no tree
        root = NULL;
    else
        root = new Node(val); // Create the root node

    // Queue is used to build the tree level by level
    queue<Node*> q;

    // Only push root if the tree is not empty
    if (root != NULL)
        q.push(root);

    // If root is NULL, queue stays empty and the loop will not run
    while (!q.empty())
    {
        // 1. Take the current parent node from the front of the queue
        Node* p = q.front(); // p = parent node
        q.pop();

        // 2. Read the values of the left and right children of this parent
        int l, r;
        cin >> l >> r;

        Node* myLeft,* myRight;

        // If left child value is -1, there is no left child
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l); // Create left child node

        // If right child value is -1, there is no right child
        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r); // Create right child node

        // Connect the created child nodes with the current parent node
        p->left = myLeft;
        p->right = myRight;

        // 3. If left child exists, push it into the queue
        // so later we can assign its children too
        if (p->left)
            q.push(p->left);

        // If right child exists, push it into the queue
        // so later we can assign its children too
        if (p->right)
            q.push(p->right);
    }

    // Return the root of the complete binary tree
    return root;
}

// Leaf Nodes in Descending Order.
int LeafNode(vector <int>& v, Node* root)
{   
    if(root == NULL)
        return 0;

    if(root->left == NULL  && root->right == NULL) // Doesn't accept value of leaf nodes.
    {
        v.push_back(root->val);
    } 

    int l = LeafNode(v, root->left);
    int r = LeafNode(v, root->right);

    return 0;
}

int main()
{
    Node* root = input_tree();
    vector <int> v;

    LeafNode(v, root);
    
    // Sorts the vector with the leaf node values in descending order.
    sort(v.begin(), v.end(), greater<int>());

    for(int i=0; i<v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}