#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
        int id;
        char name[101];
        char section;
        int mark;
};

int main()
{
    int t;
    cin >> t;
    for(int i=1;i<=t;i++)
    {
        Student a, b, c;
        // cin >> a.id;
        // cin.ignore();
        // cin.getline(a.name, 101);
        cin >> a.id >> a.name >> a.section >> a.mark;
        //----------------------------------
        // cin >> b.id;
        // cin.ignore();
        // cin.getline(b.name, 101);
        cin >> b.id >> b.name >> b.section >> b.mark;
        //----------------------------------
        // cin >> c.id;
        // cin.ignore();
        // cin.getline(c.name, 101);
        cin >> c.id >> c.name >> c.section >> c.mark;
        //----------------------------------

        Student best = a;

        if(b.mark > best.mark || (b.mark == best.mark && b.id < best.id))
        {
            best = b;
        }
        if(c.mark > best.mark || (c.mark == best.mark && c.id < best.id))
        {
            best = c;
        }

        cout << best.id << " " << best.name << " " << best.section << " " << best.mark << endl;
    }
    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;

// class Student
// {
//     public:
//         int id;
//         char name[101];
//         char section;
//         int mark;
    
//     Student(){}

//     Student(int i, char n[], char s, int m)
//     {
//         id = i;
//         strcpy(name,n);
//         section = s;
//         mark = m; 
//     }
// };

// int main()
// {
//     int t;
//     cin >> t;
//     for(int i=1;i<=t;i++)
//     {
//         Student best;
        
//         int id, mark;
//         char name[101], section;

//         cin >> id;
//         cin.ignore();
//         cin.getline(name, 101);
//         cin >> section >> mark;

//         best = Student(id, name, section, mark);


//         for(int j=1;j<=2;j++)
//         {
//             cin >> id;
//             cin.ignore();
//             cin.getline(name, 101);
//             cin >> section >> mark;

//             Student curr(id, name, section, mark);

//             if(curr.mark > best.mark)
//             {
//                 best = curr;
//             }
//             else{
//                 if(curr.mark>best.mark)
//                 {
//                     best = curr;
//                 }
//                 else if(curr.mark == best.mark && curr.id < best.id)
//                 {
//                     best = curr;
//                 }
//             }
//         }
//         cout << best.id << " " << best.name << " " << best.section << " " << best.mark << endl;
//     }
//     return 0;
// }