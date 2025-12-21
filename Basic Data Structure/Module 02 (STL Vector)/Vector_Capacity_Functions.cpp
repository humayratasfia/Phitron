#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 1. v.size()
    cout << "v.size() :" << endl;
    vector <int> a = {1, 2, 3, 4, 5};
    cout << a.size() << endl;

    // OUTPUT: 5

    // 2. v.max_size()
    cout << "v.max_size() :" << endl;
    vector <int> b;
    cout << b.max_size() << endl;

    // OUTPUT: 4611686018427387903

    // 3. v.capacity()
    cout << "v.capacity() :" << endl;
    vector <int> c;
    cout << c.capacity() << endl; // 0
    c.push_back(10);
    cout << c.capacity() << endl; // 1
    c.push_back(10);
    cout << c.capacity() << endl; // 2
    c.push_back(10);
    cout << c.capacity() << endl; // 4
    c.push_back(10);
    cout << c.capacity() << endl; // 4
    c.push_back(10);
    cout << c.capacity() << endl; // 8
    /*
    Note: When capacity crosses, vector 
    doubles its capacity.
    */

    /*
    OUTPUT:
    0
    1
    2
    4
    4
    8
    */

    // 4. v.clear()
    cout << "v.clear() :" << endl;
    vector <int> d;
    d.push_back(10);
    d.push_back(20);
    d.push_back(30);
    cout << d.size() << endl;
    cout << d.capacity() << endl;
    d.clear();
    cout << d.size() << endl;
    cout << d.capacity() << endl;
    cout << d[0] << endl;
    d.push_back(100);
    cout << d[0] << endl;

    /*
    OUTPUT:
    3
    4
    0
    4
    10
    100
    */

    // 5. v.empty()
    cout << "v.empty() :" << endl;
    vector <int> e = {1, 2, 3};
    cout << e.empty() << endl;

    // OUTPUT: 0

    // 6. v.resize()
    cout << "v.resize() 01:" << endl;
    vector <int> f;
    f.push_back(10);
    f.push_back(20);
    f.push_back(30);
    f.resize(2);

    for(int i=0;i<f.size();i++)
    {
        cout << f[i] << " ";
    }
    cout << endl;

    // OUTPUT: 10 20

    cout << "v.resize() 02:" << endl;
    vector <int> g;
    g.push_back(10);
    g.push_back(20);
    g.push_back(30);
    g.resize(7);
    g.resize(8,100);
    for(int i=0;i<g.size();i++)
    {
        cout << g[i] << " ";
    }
    cout << endl;
    
    // OUTPUT: 10 20 30 0 0 0 0 100

    return 0;
}