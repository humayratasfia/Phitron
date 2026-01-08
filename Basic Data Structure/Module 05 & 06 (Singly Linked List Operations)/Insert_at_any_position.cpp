#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int val;
    Node* next;

    // Constructor
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

// insert_at_any_pos() inserts a new value at any position/index in the linked list decided by the user.
void insert_at_any_pos(Node* &head, int index, int val)
{
    Node* newNode = new Node(val); // Creates a new node and stores the address for the inserted value.
    Node* temp = head;
    for(int i=0;i<index-1;i++) // Traverse to node at (index-1), that means the loop stops when i is equals to (index-1) .
    {
        temp = temp->next; 
    }
    // temp is at (index-1).

    newNode->next = temp->next; // Connects new node to the node after temp.
    temp->next = newNode; // Connects temp to new node.
}

// Prints linked list
void print_linked_list(Node* head)
{
    Node* temp = head; // Address stored in head is also assigned to temp for temporary use.
    while(temp != NULL) // The loop runs until temp becomes NULL (end of list).
    {
        cout << temp->val << endl; // Prints value stored in the node that temp points to.
        temp = temp->next; // After printing value of one node, assigns the address of next node to temp pointer.
    }
}

int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);

    head->next = a; // Stores address of a in next of head.
    a->next = b; // Stores address of b in next of a.

    insert_at_any_pos(head,2,100); // Calls the function to insert a value at a fixed position/index.
    print_linked_list(head); // Print the values in a linked list.

    return 0;
}