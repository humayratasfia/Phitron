#include <bits/stdc++.h>
using namespace std;

/*
In a Linked list every beside the
value every value stores the memory 
address of the next value.
*/

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

int main()
{
    //Dynamic Object
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);

    head->next = a;
    a->next = b;
    b->next = c;

    // Printing Linked List
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }

    return 0;
}