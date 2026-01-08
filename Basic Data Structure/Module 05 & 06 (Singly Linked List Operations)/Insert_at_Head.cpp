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

// insert_at_head() inserts a new value at the head of the linked list.
void insert_at_head(Node* &head, int val)
{
    Node* newNode = new Node(val); // Creates a new node and stores the address for the inserted value.
    newNode->next = head; // Stores the address of current head in the next of new node.
    head = newNode; // Updates head (new): Stores the address of new node in head pointer.
}

// Prints linked list
void print_linked_list(Node* head)
{
    Node* temp = head; // Address stored in head is also assigned to temp for temporary use.
    while(temp != NULL) // The loop runs until it finds a null pointer.
    {
        cout << temp->val << endl; // Prints value of the address stored in temp pointer.
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

    insert_at_head(head,100); // Calls the function to insert a value at head.
    print_linked_list(head); // Print the values in a linked list.

    return 0;
}