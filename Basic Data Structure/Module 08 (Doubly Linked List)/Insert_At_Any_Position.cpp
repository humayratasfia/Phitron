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

// Inserts a new node at any position in a Doubly Linked List.
void insert_at_any_pos(Node* head, int index, int val)
{
    Node* newnode = new Node(val); // Creates a new node.

    Node* temp = head;
    for(int i=0;i<index-1;i++)
    {
        temp = temp->next;
    }
    // temp is now at index-1 (previous node of the node in the target position/index).

    newnode->next = temp->next; // Stores the address of node next to temp in next of new node.
    temp->next->prev = newnode; // Stores the address of new node in previous of node next to temp.

    newnode->prev = temp; // Stores the address of temp in previous of new node.
    temp->next = newnode; // Stores the address of new node in next of temp.
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
    // Node* head = NULL;
    // Node* tail = NULL;
    
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

    cout << "Target position: 2, Value: 100" << endl;
    insert_at_any_pos(head, 2, 100); // Calls a function  that inserts a new node (here, value = 100) at any position/index in a Doubly Linked List.

    print_forward(head); // Calls a function that prints the Linked List in forward direction.

    return 0;
}