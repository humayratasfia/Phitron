#include <bits/stdc++.h>
using namespace std;

/*
In a Linked list every beside the
value every value stores the memory 
address of the next value.
*/

class Node // Node Class 
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
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);

    a->next = b;
    b->next = c;

    cout << a->val << endl;
    cout << a->next->val << endl;
    cout << a->next->next->val << endl;

    return 0;
}