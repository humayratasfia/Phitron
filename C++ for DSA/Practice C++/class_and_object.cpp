#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
        char name[100]; //100 byte
        int roll;       //4 byte
        double gpa;     //8 byte
};

int main()
{
    Student a;
    a.roll = 5;
    a.gpa = 4.50;
    char temp[100] = "Humayra Tasfia";
    strcpy(a.name,temp);
    
    cout << a.name << " " << a.roll << " " << a.gpa << endl;
    return 0;
}