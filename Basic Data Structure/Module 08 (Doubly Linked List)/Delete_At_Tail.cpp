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

// Deletes a node at Tail of a Doubly Linked List.
void delete_at_tail(Node* &head, Node* &tail)
{
    Node* deleteNode = tail; // Stores the address of current tail in deleteNode.

    tail = tail->prev; // Updates previous of current tail as new tail.
    delete deleteNode; // Deletes the deleteNode (former tail).

    /* 
    Corner Case: If there is only one node in 
    the Doubly Linked List then new tail will be NULL 
    after updating it (as the previous of the only one node 
    is NULL). 
    */
    if(tail == NULL)
    {
        head = NULL; // As the tail is NULL, the head should also be NULL.
        return;
    }

    tail->next = NULL; // Updates the next of new tail to NULL (If tail != NULL).
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

    delete_at_tail(head, tail); // Calls a function to delete a node at tail of the Doubly Linked List.

    print_forward(head); // Calls a function that prints the Linked List in forward direction.

    return 0;
}