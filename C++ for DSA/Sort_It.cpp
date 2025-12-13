#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
    string name;
    int cls;
    char section;
    int id;
    int math;
    int eng;
};

bool cmp(Student l, Student r)
{
    if((l.math + l.eng) > (r.math + r.eng))
    {
        return true;
    }
    else if((l.math + l.eng) < (r.math + r.eng))
    {
        return false;
    }
    else{
        if(l.id < r.id)
        {
            return true;
        }
        else{
            return false;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    Student a[n];
    
    for(int i=0;i<n;i++)
    {
        cin >> a[i].name >> a[i].cls >> a[i].section >> a[i].id >> a[i].math >> a[i].eng;
    }

    sort(a,a+n,cmp);
    for(int i=0;i<n;i++)
    {
        cout << a[i].name << " " << a[i].cls << " " << a[i].section << " " << a[i].id << " " << a[i].math << " " << a[i].eng << endl;
    }
    return 0;
}