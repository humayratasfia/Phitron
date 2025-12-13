#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
    string name;
    int cls;
    char section;
    int id;
};


int main()
{
    int n;
    cin >> n;
    Student a[n];
    char section[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i].name >> a[i].cls >> a[i].section >> a[i].id;
        section[i] = a[i].section;
    }
    reverse(section,section+n);
    for(int i=0;i<n;i++)
    {
        a[i].section = section[i];
    }
    for(int i=0;i<n;i++)
    {
        cout << a[i].name << " " << a[i].cls << " " << a[i].section << " " << a[i].id << endl;
    }
    return 0;
}