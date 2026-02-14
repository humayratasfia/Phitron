#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack <int> st; // Declaring a Stack using STL.
    
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