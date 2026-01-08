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

// OPTIMIZED: T.C of insert_at_tail(): O(N) -> O(1)
// insert_at_tail() inserts a new value at the tail of the linked list.
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
    // Node* head = NULL; // Corner case: No node exists yet.
    Node* head = new Node(10); // A head pointer for the first node.
    Node* a = new Node(20);
    Node* tail = new Node(30); // A tail pointer for the last node.

    head->next = a; // Stores address of a in next of head.
    a->next = tail; // Stores address of tail (last node) in next of a.

    insert_at_tail(head,tail,40); // Calls the function to insert a value at tail.
    print_linked_list(head); // Print the values in a linked list.

    cout << "Tail = " << tail->val << endl;


    return 0;
}