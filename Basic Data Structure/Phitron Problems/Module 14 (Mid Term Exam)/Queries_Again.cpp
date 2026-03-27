// PROBLEM: https://www.hackerrank.com/contests/mid-term-exam-a-basic-data-structures-a-batch-08/challenges/queries-again-1

#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int val;
    Node* next;
    Node* prev;

    // Constructor
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

// Inserts a node at head.
void insert_at_head(Node* &head, Node* &tail, int val)
{
    Node* newnode  = new Node(val); 

    if(head == NULL) // Corner Case: If no node exists.
    {
        head = newnode;
        tail = newnode;

        return;
    }

    head->prev = newnode; 
    newnode->next = head; 

    head = newnode;
}

// Inserts a new node at tail.
void insert_at_tail(Node* &head, Node* &tail, int val)
{
    Node* newnode  = new Node(val); 

    if(head == NULL) // Corner Case: If no node exists.
    {
        head = newnode;
        tail = newnode;

        return;
    }

    tail->next = newnode; 
    newnode->prev = tail; 

    tail = newnode;
}

// Inserts a new node at any position in a Doubly Linked List.
void insert_at_any_pos(Node* head, int index, int val)
{
    Node* newnode = new Node(val); 

    Node* temp = head;

    for(int i=0;i<index-1;i++)
    {
        temp = temp->next;
    }
    // temp is now at index-1 

    newnode->next = temp->next;
    temp->next->prev = newnode;

    newnode->prev = temp; 
    temp->next = newnode; 
}

// Prints the Linked List in Forward direction.
void print_forward(Node* head)
{
    Node* temp = head;

    while(temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Prints the Linked List in Backward direction.
void print_backward(Node* tail)
{
    Node* temp = tail;

    while(temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
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

        int size = 0;
        Node* temp = head;
        while(temp != NULL)
        {
            size++;
            temp = temp->next;
        }
        // cout << size << endl;

        if(x == 0)
        {
            insert_at_head(head, tail, v);

            cout << "L -> ";
            print_forward(head);

            cout << "R -> ";
            print_backward(tail);
        }
        else if(x == size)
        {
            insert_at_tail(head, tail, v);

            cout << "L -> ";
            print_forward(head);

            cout << "R -> ";
            print_backward(tail);
        }
        else if(x > 0 && x < size)
        {
            insert_at_any_pos(head, x, v);

            cout << "L -> ";
            print_forward(head);

            cout << "R -> ";
            print_backward(tail);
        }
        else
        {
            cout << "Invalid" << endl;
        }

    }
}