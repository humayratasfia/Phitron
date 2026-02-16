#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue <int> q; // Declaring a Queue using STL.
    
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