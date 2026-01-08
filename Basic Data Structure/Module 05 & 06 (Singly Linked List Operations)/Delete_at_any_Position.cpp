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

// Deletes cnode at any position/index in the Linked List.
void delete_at_any_pos(Node* head, int index)
{
    Node* temp = head;
    for(int i=0;i<index-1;i++)
    {
        temp = temp->next;
    }
    // Right now temp is at index-1.

    Node* deleteNode = temp->next;
    temp->next = deleteNode->next;
    delete deleteNode;
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

    delete_at_any_pos(head,2); // This function deletes a node at any position in a linked list.
    print_linked_list(head);

    return 0;
}