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

Student* fun() //returns an address (stored by pointer variable Humayra)
{
    Student *Humayra = new Student(5, 12, 5.00); //dynamic object
    return Humayra;
}

int main()
{
    Student *humayra = fun(); //receives an address

    cout << "Humayra:" << endl;
    cout << "Class: " << humayra->cls << endl << "Roll: " << humayra->roll << endl << "GPA: " << humayra->gpa << endl; 
    //accessing the class of a dynamic object by dereferencing the object
    return 0;
}