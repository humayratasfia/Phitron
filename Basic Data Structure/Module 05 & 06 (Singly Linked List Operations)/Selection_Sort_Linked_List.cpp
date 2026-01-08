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

// Sorts Linked list using selection sort in ascending order
// Time Complexity: O(n²)
void sort_linked_list(Node* head)
{
    // Outer loop: 'i' starts from head and moves through each node until second-to-last node
    // We stop at i->next != NULL because we need at least one node after 'i' to compare
    for(Node* i = head; i->next != NULL; i = i->next)
    {
        // Inner loop: 'j' starts from the node after 'i' and goes to the end of the list
        // This compares current node 'i' with every node that comes after it
        for(Node* j = i->next; j != NULL; j = j->next)
        {
            // Compare values: if current node 'i' has greater value than node 'j'
            if(i->val > j->val)
            {
                // Swap the values to put smaller value at 'i' position
                // This ensures 'i' will hold the smallest value among all remaining nodes
                swap(i->val, j->val);
            }
        }
        // After inner loop completes, 'i' now holds the smallest value 
        // from position 'i' to end of list
    }
    // After all iterations, the list is sorted in ascending order
}

int main()
{
    // No node exists.
    Node* head = NULL;
    Node* tail = NULL; 
    
    // Taking input for Linked List.
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

    sort_linked_list(head); // This function sorts the values of the nodes in a linked list.
    print_linked_list(head);

    return 0;
}