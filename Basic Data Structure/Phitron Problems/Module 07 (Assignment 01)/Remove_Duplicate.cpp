// https://www.hackerrank.com/contests/assignment-01-a-basic-data-structure-a-batch-08/challenges/remove-duplicate-9-1

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

void remove_duplicate(Node* head)
{
    Node* temp1 = head;
    Node* temp2 = head;
    // Node* temp2 = head->next;

    while(temp1 != NULL)
    {
        temp2 = temp1;
        while(temp2->next != NULL)
        {
            if(temp1->val == temp2->next->val) // When duplicate is found, deletes the duplicate and connect the nodes.
            {
                Node* deletenode = temp2->next;
                temp2->next = deletenode->next;
                delete deletenode;
            }
            else{
                temp2 = temp2->next; // Only moves when not deleting.
            }
        }
        temp1 = temp1->next;
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
    
    Node* head = NULL;
    Node* tail = NULL;

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

    remove_duplicate(head); // This function removes all the duplicates from a linked list.

    print_linked_list(head);

    return 0;
}