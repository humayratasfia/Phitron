// Overall Time Complexity: O(N)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];

    // A sorted array
    for(int i=0;i<n;i++) // Time Complexity: O(N)
    {
        cin >> a[i];
    }
    /* 
    Unsorted array:
    Linear Search T.C: O(N)
    Binary Search T.C: O(NlogN)
    
    If the array is unsorted we have to use 
    sort function (Time Complexity: O(NlogN)) to sort the array
    and then do Binary Search. In that case if we compare
    the Time Complexity with Linaer Search then using Linear
    Search is better than Binary Search. */

    int val;
    cin >> val;
    int flag = 0;

    // Binary Search
    int l = 0;
    int r = n-1;
    while(l <= r) // Time Complexity: O(logN)
    {
        int mid = (l+r)/2;
        if(a[mid] == val)
        {
            flag = 1;
            break;
        }
        else if(a[mid] > val)
        {
            r = mid-1;
        }
        else
        {
            l = mid+1;
        }
    }

    if(flag == 1)
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }

    return 0;
}