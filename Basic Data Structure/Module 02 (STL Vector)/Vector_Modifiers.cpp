#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 1. v= or v.assign()
    cout << "v= or v.assign()" << endl;
    vector <int> a = {1, 2, 3, 4, 5};
    vector <int> b;
    b.assign(a.begin(),a.end());
    for(int i=0;i<b.size();i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;

    /* 
    OUTPUT:
    1 2 3 4 5
    */
    
    // 2. v.push_back() and 3. v.pop_back()
    cout << "v.push_back() and v.pop_back()" << endl;
    vector <int> c = {1, 2, 3, 4};
    c.push_back(5);
    for(int x: c)
    {
        cout << x << " ";
    }
    cout << endl;
    c.pop_back();
    for(int x: c)
    {
        cout << x << " ";
    }
    cout << endl;

    /* 
    OUTPUT:
    1 2 3 4 5
    1 2 3 4
    */

    // 4. v.insert(position,value)
    cout << "v.insert(pos,val) - 01" << endl; //01
    vector <int> d = {1, 2, 3, 4};
    d.insert(d.begin()+2,100);
    for(int x: d)
    {
        cout << x << " ";
    }
    cout << endl;

    /* 
    OUTPUT:
    1 2 100 3 4
    */

    cout << "v.insert(pos,val) - 02" << endl; //02
    vector <int> e = {1, 2, 3, 4};
    vector <int> f = {100, 200, 300};
    e.insert(e.begin()+2,f.begin(),f.end());
    for(int x: e)
    {
        cout << x << " ";
    }
    cout << endl;

    /* 
    OUTPUT:
    1 2 100 200 300 3 4
    */

    // 5. v.erase(position)
    cout << "v.erase(pos) - 01" << endl; //01
    vector <int> g = {1, 2, 3, 4, 5};
    g.erase(g.begin()+1);
    for(int x: g)
    {
        cout << x << " ";
    }
    cout << endl;

    /* 
    OUTPUT:
    1 3 4 5
    */

    cout << "v.erase(pos) - 02" << endl; //02
    vector <int> h = {1, 2, 3, 4, 5};
    h.erase(h.begin()+1,h.begin()+4);
    for(int x: h)
    {
        cout << x << " ";
    }
    cout << endl;

    /* 
    OUTPUT:
    1 5
    */

    // 6. replace(v.begin(),v.end(),velue,replace_value)
    cout << "replace(v.begin(),v.end(),val,replace_val) - 01" << endl; //01
    vector <int> i = {1, 2, 3, 2, 4, 2};
    replace(i.begin(),i.end(),2,100);
    for(int x: i)
    {
        cout << x << " ";
    }
    cout << endl;

    /* 
    OUTPUT:
    1 100 3 100 4 100 
    */

    cout << "replace(v.begin(),v.end(),val,replace_val) - 02" << endl; //02
    vector <int> j = {1, 2, 3, 2, 4, 2};
    replace(j.begin(),j.end()-1,2,100);
    for(int x: j)
    {
        cout << x << " ";
    }
    cout << endl;

    /* 
    OUTPUT:
    1 100 3 100 4 2 
    */
    
    // 7. find(v.begin(),v.end(),value)
    cout << "find(v.begin(),v.end(),value) - 01" << endl; //01
    vector <int> k = {1, 2, 3, 4, 5, 100};
    auto it = find(k.begin(),k.end(),100);
    if(it==k.end())
    {
        cout << "not found" << endl;
    }
    else{
        cout << "found" << endl;
    }

    /* 
    OUTPUT:
    found
    */

    cout << "find(v.begin(),v.end(),value) - 02" << endl; //02
    vector <int> l = {1, 2, 3, 4, 100};
    auto it_2 = find(l.begin(),l.end()-1,100);
    if(it_2==l.end()-1)
    {
        cout << "not found" << endl;
    }
    else{
        cout << "found" << endl;
    }

    /* 
    OUTPUT:
    not found
    */

    return 0;
}