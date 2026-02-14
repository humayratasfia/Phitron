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

// Stack - implemented by using doubly linked list.
class myStack
{
    public:
        Node* head = NULL;
        Node* tail = NULL;
        int sz = 0;

        void push(int val) // st.push() - O(1)
        {
            sz++; // Keeping track of size of the doubly linked list.
            Node* newNode = new Node(val);
            if(head == NULL) // Corner Case: No node exists.
            {
                head = newNode;
                tail = newNode;
                return;
            }
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
        void pop() // st.pop() - O(1)
        {
            sz--; // Keeping track of size of the doubly linked list.
            Node* deleteNode = tail;
            tail = tail->prev;
            delete deleteNode;
            if(tail == NULL) // Corner Case: No node exists.
            {
                head = NULL;
                return;
            }
            tail->next = NULL;
        }
        int top() // st.top() - O(1)
        {
            return tail->val;
        }
        int size() // st.size() - O(1)
        {
            return sz;
        }
        bool empty() // st.empty() - O(1)
        {
            return (head == NULL);
        }
};

int main()
{
    myStack st;

    // Stack Input:
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    // Stack Output:
    while(!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}