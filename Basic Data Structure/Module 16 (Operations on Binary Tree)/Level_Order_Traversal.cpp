#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int val; // value of a node
    Node* left; // left child
    Node* right; // right child

    // Constructor
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

// Binary Tree:
//         10
//       /   \ 
//     20    30
//    /     /  \ 
//  40    50    60

void level_order(Node* root)
{
    // If the tree is empty, there is nothing to traverse
    if (root == NULL)
    {
        cout << "No Tree" << endl;
        return;
    }
    // Queue is used to process nodes in FIFO order (Breadth-First Search)
    queue <Node*> q;

    // Start by pushing the root node into the queue
    q.push(root);

    // Continue until all nodes have been visited
    while (!q.empty())
    {
        // 1. Get the front node from the queue
        Node* f = q.front();
        q.pop();

        // 2. Print/process the current node
        cout << f->val << " ";

        // 3. Push the children into the queue if exists
        if (f->left != NULL)
            q.push(f->left);
        if (f->right != NULL)
            q.push(f->right);
    }
}

int main()
{
    Node* root = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    Node* e = new Node(60);

    root->left = a;
    root->right = b;
    a->left = c;
    b->left = d;
    b->right = e;

    level_order(root); // Level Order Traversal Implementation

    // OUTPUT: 10 20 30 40 50 60
    
    return 0;
}