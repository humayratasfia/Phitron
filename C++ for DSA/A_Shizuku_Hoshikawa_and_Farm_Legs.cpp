#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for(int i=1;i<=t;i++)
    {
        int n;
        cin >> n;
        
        int solution =0;
        for(int cow=0;cow<=n/4;cow++)
        {
            int chick = n - 4*cow;
            if(chick%2==0)
            {
                solution++;
            }
        }
        cout << solution << endl;
    }
    return 0;
}