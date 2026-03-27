// PROBLEM: https://www.hackerrank.com/contests/mid-term-exam-a-basic-data-structures-a-batch-08/challenges/same-or-not-4

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

class myStack // Stack Implementation.
{
    public:
    Node* head = NULL;
    Node* tail = NULL;  
    int sz = 0;

    void push(int val){
        Node* newNode = new Node(val);
        sz++;
        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }

    void pop(){
        Node* deleteNode = tail;
        sz--;
        if(head->next == NULL)
        {
            head = NULL;
            tail = NULL;
            delete deleteNode;
            return;
        }
        tail = tail->prev;
        tail->next = NULL;
        delete deleteNode;
    }

    int top()
    {
        return tail->val;
    }

    int size()
    {
        return sz;
    }

    bool empty()
    {
        return (head == NULL);
    }
};

class myQueue // Queue Implementation.
{
    public:
    Node* head = NULL;
    Node* tail = NULL;  
    int sz = 0;

    void push(int val){
        Node* newNode = new Node(val);
        sz++;
        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }

    void pop(){
        Node* deleteNode = head;
        sz--;
        if(head->next == NULL)
        {
            head = NULL;
            tail = NULL;
            delete deleteNode;
            return;
        }
        head = head->next;
        head->prev = NULL;
        delete deleteNode;
    }

    int front()
    {
        return head->val;
    }

    int size()
    {
        return sz;
    }

    bool empty()
    {
        return (head == NULL);
    }
};

int main()
{
    int n, m;
    cin >> n >> m;

    myStack s;
    myQueue q;

    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        s.push(x);
    }
    for(int i=0;i<m;i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    int flag = 0;
    if(n != m)
    {
        cout << "NO" << endl;
        return 0;
    }
    else{
        while(!s.empty())
        {
            if(s.top() == q.front())
            {
                s.pop();
                q.pop();
            }
            else{
                flag = 1;
                break;
            }
        }
    }

    if(flag == 0)
    {
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}