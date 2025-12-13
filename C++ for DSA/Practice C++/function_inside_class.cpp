#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
    string name;
    int roll;
    
    Student(string name, int roll)
    {
        this->name = name;
        this->roll = roll;
    }
    void hello()
    {
        cout << "Hello, " << name << endl;
    }
};

int main()
{
    Student humayra("Humayra Tasfia", 21);
    humayra.hello();
    Student maisha("Maisha Tasnim", 20);
    maisha.hello();
    return 0;
}