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

// insert_at_tail() inserts a new value at the tail of the linked list.
void insert_at_tail(Node* &head, int val)
{
    Node* newNode = new Node(val); // Creates a new node and stores the address for the inserted value.

    // Executes when Node* head = NULL (no address of any value stored in head).
    if(head == NULL) 
    {
        head = newNode; // Stores the address of inserted new node.
        return; // Returns to main function after inserting.
    }
    Node* temp = head; // If head has an address stored, then the address stored is also assigned to temp for temporary use.
    while(temp->next != NULL) // Looks for the last node before making connection with new node.
    {
        temp = temp->next; // Stores the address of next node in temp until last node is found. If last node found then loop stops.
    }
    temp->next = newNode; // Stores the address of new node in next of last node. Now the new node is the last node/ tail.

    // right now temp is at last node.
}

// Prints linked list
void print_linked_list(Node* head)
{
    Node* temp = head;
    while(temp != NULL) // The loop runs until it finds a null pointer.
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
}

int main()
{
    // Node* head = NULL; // Corner case: No node exists yet.
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);

    head->next = a; // Stores address of a in next of head.
    a->next = b; // Stores address of b in next of  a.

    insert_at_tail(head,40); // Calls the function to insert a value at tail.
    print_linked_list(head); // Print the values in a linked list.

    return 0;
}