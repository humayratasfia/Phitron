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

int main()
{
    // Declare the Nodes.
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);

    // Connect the Nodes.
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = a;

    Node* slow = head; // Slow Pointer - travels 1 node every time.
    Node* fast = head; // Fast Pointer - travels 2 nodes every time.

    bool flag = false;
    while(fast != NULL && fast->next != NULL) // Even - fast != NULL , Odd - fast->next != NULL
    {
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast) // Base Case.
        {
            // Cycle Detected.
            flag = true; 
            break;
        }
    }

    if(flag == true)
    {
        cout << "Cycle Detected";
    }
    else{
        cout << "Cycle Not Detected";
    }
    return 0;
}