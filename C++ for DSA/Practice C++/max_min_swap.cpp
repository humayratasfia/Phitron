#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b ;

    // if(a>b)
    // {
    //     cout << a << endl;
    // }
    // else{
    //     cout << b << endl;
    // }

    cout << min(a,b) << endl;
    cout << max(a,b) << endl;
    cout << min({4, 5, 7, 3, 10}) << endl;
    cout << max({99, 55, 63, 25, 3}) << endl;

    swap(a,b);

    cout << "a = " << a << endl;
    cout << "B = " << b << endl;
    return 0;
}