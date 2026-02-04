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

void insert_at_tail(Node* &head, Node* &tail, int val)
{
    Node* newNode = new Node(val); 

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

// Reverse the Singly Linked List
void reverse_linked_list(Node* &head, Node* temp)
{
    // Base case
    if(temp->next == NULL)
    {
        head = temp;
        return;
    }
    reverse_linked_list(head, temp->next);
    temp->next->next = temp;
    temp->next = NULL;
}

void print_linked_list(Node* head)
{
    Node* temp = head;
    while(temp != NULL) // The loop runs until it finds a null pointer.
    {
        cout << temp->val << " ";
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

    reverse_linked_list(head, head); // This function reverse the Singly Linked List (not reverse printing).

    print_linked_list(head);

    return 0;
}