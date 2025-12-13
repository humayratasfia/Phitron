#include <bits/stdc++.h>
using namespace std;

int main()
{
    int p;
    cin >> p;
    
    for(int i=1;i<=p;i++)
    {
        int flag = 0;
        int n;
        cin >> n;
        int y, r;
        cin >> y >> r ;

        flag = flag + y/2;
        for(int j=0;j<=r;j++)
        {
            if(j!=0)
            {
                flag++;
            }
        }
        if(flag<=n)
        {
            cout << flag << endl;
        }
        else{
            cout << n << endl;
        }
    }
    return 0;
}