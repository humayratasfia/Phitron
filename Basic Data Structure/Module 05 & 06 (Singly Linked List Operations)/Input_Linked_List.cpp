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
        head = newNode; // Stores the address of new node in head (first node).
        tail = newNode; // Stores the address of new node in tail (last node).
        return; // Returns to main function after inserting.
    }
    
    // Executes when a node already exists.
    tail->next = newNode; // Link current tail to the new node. 
    tail = newNode; // Update tail pointer to new node (O(1) operation).

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
    // No node exists.
    Node* head = NULL;
    Node* tail = NULL; 
    
    //Taking input for Linked List.
    int val;
    while(true) // T.C: O(N)
    {
        cin >> val;
        if(val == -1) // Stops inserting value at tail if the input = -1.
        {
            break;
        }
        insert_at_tail(head,tail,val); // T.C: O(1)
    }

    print_linked_list(head);

    return 0;
}