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

// Inserts a value at tail of a Linked List.
void insert_at_tail(Node* &head, Node* &tail, int val)
{
    Node* newNode = new Node(val); // Creates a new node and stores the address for the inserted value.

    // Executes when Node* head = NULL (no address of any value stored in head).
    if(head == NULL) 
    {
        head = newNode; 
        tail = newNode; 
        return;
    }
    
    // Executes when a node already exists.
    tail->next = newNode; 
    tail = newNode; 

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

// Deletes current head of the Linked List.
void delete_at_head(Node* &head)
{
    Node* deleteNode = head; // Stores the address of current head in a pointer named deleteNode.
    head = head->next; // Updates the second node to head.
    delete deleteNode; // Deletes the former head node.
}

int main()
{
    // No node exists.
    Node* head = NULL;
    Node* tail = NULL; 
    
    //Taking input for Linked List.
    int val;
    while(true) 
    {
        cin >> val;
        if(val == -1) // Stops inserting value at tail if the input = -1.
        {
            break;
        }
        insert_at_tail(head,tail,val); 
    }

    delete_at_head(head); // This function deletes the current head of a linked list.
    print_linked_list(head);

    return 0;
}