#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int val;
    Node* next;
    Node* prev;

    // Constructor
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

// Deletes a node at any position/index of a Doubly Linked List.
void delete_at_any_pos(Node* head, int index)
{
    Node* temp = head; // A temporary node starting from head to keep track of index.

    for(int i=0;i<index-1;i++)
    {
        temp = temp->next;
    }
    // temp is now at index-1 (previous node of the node in the target position/index).

    Node* deleteNode = temp->next; // Stores the address of the node in the target position/index in deleteNode.

    // Connects the previous and next nodes of the node in target position.
    temp->next = temp->next->next; 
    temp->next->prev = temp;

    delete deleteNode; // Deletes deleteNode.
}

// Prints the Linked List in Forward direction.
void print_forward(Node* head)
{
    Node* temp = head;

    while(temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* tail = new Node(40);

    head->next = a;
    a->prev = head;

    a->next = b;
    b->prev = a;

    b->next = tail;
    tail->prev = b;

    delete_at_any_pos(head, 2); // Calls a function to delete a node at any position/index of the Doubly Linked List.

    print_forward(head); // Calls a function that prints the Linked List in forward direction.

    return 0;
}