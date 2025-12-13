#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
        int roll;
        int cls;
        double gpa;

    Student(int r, int c, int g)
    {
        roll = r;
        cls = c;
        gpa = g;
    }
};

Student fun()
{
    Student Humayra(5, 12, 5.00);
    return Humayra;
}

int main()
{
    Student humayra = fun();

    cout << "Humayra:" << endl;
    cout << "Class: " << humayra.cls << endl << "Roll: " << humayra.roll << endl << "GPA: " << humayra.gpa << endl; 
    return 0;
}