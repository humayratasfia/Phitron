// PROBLEM: https://www.hackerrank.com/contests/mid-term-exam-a-basic-data-structures-a-batch-08/challenges/browser-history-1

#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
    string word;
    Node* next;
    Node* prev;

    // Constructor
    Node(string word)
    {
        this->word = word;
        this->next = NULL;
        this->prev = NULL;
    }
};

// Inserts a wordue at Tail of a Doubly Linked List.
void insert_at_tail(Node* &head, Node* &tail, string word)
{
    Node* newnode  = new Node(word); 

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

// Prints the Linked List in Forward direction.
void print_forward(Node* head)
{
    Node* temp = head;

    while(temp != NULL)
    {
        cout << temp->word << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    // No node exists.
    Node* head = NULL;
    Node* tail = NULL;

    //Taking input for Doubly Linked List.
    string word;
    while(true)
    {
        cin >> word; 
        if(word == "end") 
        {
            break;
        }

        insert_at_tail(head, tail, word); 
    }

    Node* track = head;

    int t;
    cin >> t;
    while(t--)
    {
        Node* temp = head;

        string command;
        cin >> command;
        if(command == "visit")
        {
            string address;
            cin >> address;
            bool flag = false;
            while(temp != NULL)
            {
                if(temp->word == address)
                {
                    cout << address << endl;
                    track = temp;
                    flag = true;
                    break;
                }
                temp = temp->next;
            }
            if(flag == false)
            {
                cout << "Not Available" << endl;
            }
        }
        else if(command == "prev")
        {
            if(track->prev != NULL)
            {
                track = track->prev;
                cout << track->word << endl;
            }
            else{
                cout << "Not Available" << endl;
            }
        }
        else if(command == "next")
        {
            if(track->next != NULL)
            {
                track = track->next;
                cout << track->word << endl;
            }
            else{
                cout << "Not Available" << endl;
            }
        }
    }

    return 0;
}