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

// Inserts a value at Tail of a Doubly Linked List.
void insert_at_tail(Node* &head, Node* &tail, int val)
{
    Node* newnode  = new Node(val); // Creates a new node using the inserted value.

    if(head == NULL) // Corner Case: If no node exists.
    {
        head = newnode;
        tail = newnode;

        return;
    }

    tail->next = newnode; // Stores address of new node in next of current tail.
    newnode->prev = tail; // Stores address of current tail in previous of new node.

    tail = newnode; // Updates tail: new node is the new tail.

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
    Node* tail = new Node(30);

    head->next = a;
    a->prev = head;

    a->next = tail;
    tail->prev = a;

    insert_at_tail(head, tail, 100); // Calls a function to insert a new node (here, value: 100) at tail of the Doubly Linked List.

    print_forward(head); // Calls a function that prints the Linked List in forward direction.

    return 0;
}