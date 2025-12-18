#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long long int count = 0;
    long long int num;
    if(n%100!=0)
    {
        num = n%100;
        count = count + n/100;
        if(num%20!=0)
        {
            count = count + num/20;
            num = num%20;
            if(num%10!=0)
            {
                count = count + num/10;
                num = num%10;
                if(num%5!=0)
                {
                    count = count + num/5;
                    num = num%5;
                    if(num%1==0)
                    {
                        count = count + num/1;
                    }
                }
                else{
                    count = count + num/5;
                }   
            }
            else{
                count = count + num/10;
            }
        }
        else{
            count = count + num/20;
        }
    }
    else{
        count += n/100;
    }

    cout << count << endl;
    return 0;
}