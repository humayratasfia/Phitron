#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
        int roll;
        int cls;
        double gpa;

    Student(int roll, int cls, int gpa)
    {
        //(*this).roll = roll;
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};
int main()
{
    Student Humayra(5, 12, 5.00);

    cout << "Humayra:" << endl;
    cout << "Class: " << Humayra.cls << endl << "Roll: " << Humayra.roll << endl << "GPA: " << Humayra.gpa << endl; 
    return 0;
}