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

void postorder(Node* root)
{
    if(root == NULL) // Base Case
    {
        return;
    }

    postorder(root->left);     // left
    postorder(root->right);    // right
    cout << root->val << " ";  // root

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

    postorder(root); // Postorder Implementation

    // OUTPUT: 40 20 50 60 30 10 
    
    return 0;
}