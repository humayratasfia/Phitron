// https://www.hackerrank.com/contests/assignment-01-a-basic-data-structure-a-batch-08/challenges/queries-6-1

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

void insert_at_head(Node* &head, Node* &tail, int val)
{
    Node* newNode = new Node(val); 
    newNode->next = head; 
    head = newNode; 
    if(tail == NULL)
    {
        tail = newNode;
    }
}

void insert_at_tail(Node* &head, Node* &tail, int val)
{
    Node* newNode = new Node(val);

    // Executes when Node* head = NULL
    if(head == NULL) 
    {
        head = newNode; 
        tail = newNode; 
        return; 
    }
    
    tail->next = newNode; // Link current tail to the new node. 
    tail = newNode; // Update tail pointer to new node 

}

void delete_at_head(Node* &head, Node* &tail)
{
    // If no node exist in the first place.
    if(head == NULL)
    {
        return;
    }

    Node* deleteNode = head; 
    head = head->next; 
    delete deleteNode; 

    // After deleting head if no node is left, updates tail to NULL.
    if(head == NULL)
    {
        tail = NULL;
    }
}

void delete_at_any_pos(Node* &head, Node* &tail, int index)
{
    Node* temp = head;
    // Checks size of linked list.
    int size = 0;
    while(temp != NULL)
    {
        size++;
        temp = temp->next;
    }
    if(index >= size) // If index is greater or equal to size then return.
    {
        return;
    }

    // If not then then the following code runs.
    temp = head;
    for(int i=0;i<index-1;i++)
    {
        temp = temp->next;
    }
    // Right now temp is at index-1.

    Node* deleteNode = temp->next;
    temp->next = deleteNode->next;
    delete deleteNode;

    // If the last node is deleted then updates the tail.
    if(temp->next == NULL)
    {
        tail = temp;
    }
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
    int q;
    cin >> q;

    Node* head = NULL;
    Node* tail = NULL;

    while(q--)
    {
        int x, v;
        cin >> x >> v;

        if(x == 0)
        {
            insert_at_head(head,tail,v);
            print_linked_list(head);
        }
        if(x == 1)
        {
            insert_at_tail(head,tail,v);
            print_linked_list(head);
        }
        if(x == 2)
        {
            if(v == 0) // If index index is 0, then deletes from head.
            {
                delete_at_head(head,tail);
                print_linked_list(head);
            }
            else{
                delete_at_any_pos(head,tail,v);
                print_linked_list(head);
            }
        }
        cout << endl;
    }
    return 0;
}