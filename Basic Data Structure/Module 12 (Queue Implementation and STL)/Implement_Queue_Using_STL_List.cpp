#include <bits/stdc++.h>
using namespace std;

// Queue - Implementing using STL List.
class myQueue
{
    public:
        list <int> l;

        void push(int val) // q.push(val) - O(1)
        {
            l.push_back(val);
        }

        void pop() // q.pop - O(1)
        {
            l.pop_front();
        }

        int front() // q.front() - O(1)
        {
            return l.front();
        }

        int back() // q.back() - O(1)
        {
            return l.back();
        }

        int size() // q.size() - O(1)
        {
            return l.size();
        }

        bool empty() // q.empty() - O(1)
        {
            return l.empty();
        }
};

int main()
{
    myQueue q;

    // Queue Input:
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    // Queue Output: 
    while(!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}