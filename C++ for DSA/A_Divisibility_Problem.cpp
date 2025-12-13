#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i=1;i<=t;i++)
    {
        long long int a, b;
        cin >> a >> b;
        long long int count;

        if(a%b==0)
        {
            count = 0;
        }
            else{
            
            // Current position: a = (quotient × b) + remainder
            // Next multiple: (quotient + 1) × b
            // Distance needed: [(quotient + 1) × b] - [quotient × b + remainder]
            // Simplifies to: b - remainder
            count = b - a % b;
        }
        
        // while(true)
        // {
        //     if(a%b==0)
        //     {
        //         break;
        //     }
        //     else{
        //         // a++;
        //         // count++;
        //     }
        // }
        cout << count << endl;
    }
    return 0;
}