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

// Reverse printing
void print_reverse(Node* temp)
{
    // Base case
    if(temp == NULL)
    {
        return;
    }
    print_reverse(temp->next);
    cout << temp->val << endl;
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

    print_reverse(head); // This function reverse prints the linked list.

    return 0;
}