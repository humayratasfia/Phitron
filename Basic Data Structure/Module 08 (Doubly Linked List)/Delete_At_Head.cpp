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

// Deletes a node at Head of a Doubly Linked List.
void delete_at_head(Node* &head, Node* &tail)
{
    Node* deleteNode = head; // Stores the address of current head in deleteNode.

    head = head->next; // Updates next of current head as new head.
    delete deleteNode; // Deletes the deleteNode (former head).

    /* 
    Corner Case: If there is only one node in 
    the Doubly Linked List then new head will be NULL 
    after updating it (as the next of the only one node 
    is NULL). 
    */
    if(head == NULL)
    {
        tail = NULL; // As the head is NULL, the tail should also be NULL.
        return;
    }

    head->prev = NULL; // Updates the previous of the new head to NULL (If head != NULL).
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

    delete_at_head(head, tail); // Calls a function to delete a node at head of the Doubly Linked List.

    print_forward(head); // Calls a function that prints the Linked List in forward direction.

    return 0;
}