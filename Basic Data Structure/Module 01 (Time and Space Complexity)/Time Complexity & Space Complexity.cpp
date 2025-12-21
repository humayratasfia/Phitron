/*
1. Time Complexity:
Time complexity measures the amount of time an algorithm 
takes to run to completion. It does not measure actual 
seconds (which varies by hardware), but rather the number 
of elementary operations or steps performed.

2. Space complexity:
Space complexity measures the amount of memory (RAM) an 
algorithm requires during its execution.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; //Space Complexity: O(1)
    cin >> n;
    int sum = 0; //Space Complexity: O(1)

    /* 
    
    1. Here, the worst case is O(N)
    Therefore, Time Complexity = O(N).

    2. Here, Best case to do the summation is O(1)
    Therefore Time Complexity should be O(1) to make
    the code more efficient.

    */

    //Summation using loop
    //Time Complexity: O(N)
    for(int i=1;i<=n;i++) //Space Complexity: O(1)
    {
        sum += i;
    }
    cout << sum << endl;

    //Summation using formula
    //Time Complexity: O(1)
    sum = (n * (n + 1)) / 2;
    cout << sum << endl;

    return 0;
}

/*
Complexity Hierarchy (Fastest to Slowest):

1. Constant O(1)
2. Logarithmic O(logN)
3. Square Root O(sqrt(N))
4. Linear O(N)
5. Linearithmic O(NlogN)
6. Quadratic O(N^2) = O(N*N)
   Note: Cubic is worser than Quadratic.
8. Exponential O(2^N)
9. Factorial O(N!)
*/

// Time Complexity Problems: https://docs.google.com/document/d/12ZqZJQsBGwOOg7ESlWp4fS71G_hqXmSANHX7E7iwkXk/edit?tab=t.0
