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
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);

    head->next = a;
    a->prev = head;

    a->next = tail;
    tail->prev = a;

    cout << "Forward Print: ";
    print_forward(head); // Calls a function that prints the Linked List in forward direction.
    
    cout << "Backward Print: ";
    print_backward(tail); // Calls a function that prints the Linked List in backward direction.

    return 0;
}