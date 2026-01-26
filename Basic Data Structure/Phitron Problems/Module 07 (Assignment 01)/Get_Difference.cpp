// https://www.hackerrank.com/contests/assignment-01-a-basic-data-structure-a-batch-08/challenges/get-difference

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

void difference(Node* &head) // Output: Difference of max and min value of the linked list.
{
    Node* temp = head;
    int max = INT_MIN;
    int min = INT_MAX;
    while(temp != NULL) // The loop runs until it finds a null pointer.
    {
        if(temp->val > max)
        {
            max = temp->val;
        }
        if(temp->val < min)
        {
            min = temp->val;
        }
        temp = temp->next;
    }

    cout << abs(max-min) << endl;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while(true)
    {
        cin >> val;
        if(val == -1)
        {
            break;
        }
        insert_at_tail(head,tail,val);
    }

    difference(head); // Calls difference function.

    return 0;
}