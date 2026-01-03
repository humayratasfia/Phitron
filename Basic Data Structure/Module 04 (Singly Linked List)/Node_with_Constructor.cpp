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
    Node a(10), b(20), c(30);

    a.next = &b;
    b.next = &c;

    cout << a.val << endl;
    cout << a.next->val << endl;
    cout << a.next->next->val << endl;

    return 0;
}