#include <bits/stdc++.h>
using namespace std;

int main()
{

    //Type 01:
    cout << "Type 01" << endl;
    vector <int> a;
    cout << a.size() << endl;

    // OUTPUT: 0

    //Type 02:
    cout << "Type 02" << endl;
    vector <int> b(5);
    cout << b.size() << endl;
    
    // OUTPUT: 5
    
    //Type 03:
    cout << "Type 03" << endl;
    vector <int> c(5,0);
    for(int i=0;i<c.size();i++)
    {
        cout << c[i] << " ";
    }
    cout << endl << c.size() << endl;
    
    //OUTPUT: 
    //0 0 0 0 0 
    //5
    
    //Type 04:
    cout << "Type 04" << endl;
    vector <int> v(5,2);
    vector <int> v2(v);
    for(int i=0;i<v2.size();i++)
    {
        cout << v2[i] << " ";
    }
    cout << endl << v2.size() << endl;

    // OUTPUT:
    // 2 2 2 2 2 
    // 5
    
    //Type 05:
    cout << "Type 05" << endl;
    int d[5] = {1, 2, 3, 4, 5};
    vector <int> e(d,d+4);
    for(int i=0;i<e.size();i++)
    {
        cout << e[i] << " ";
    }
    cout << endl << e.size() << endl;

    // OUTPUT:
    // 1 2 3 4 
    // 4

    //Type 06:
    cout << "Type 06" << endl;
    vector <int> f = {1, 2, 3, 4, 5};
    for(int i=0;i<f.size();i++)
    {
        cout << f[i] << " ";
    }
    cout << endl << f.size() << endl;

    // OUTPUT:
    // 1 2 3 4 
    // 4
    
    return 0;
}