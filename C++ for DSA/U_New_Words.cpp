#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    char c;
    int fre[26] = {0};
    for(int i=0;i<s.size();i++)
    {
        c = tolower(s[i]); //converts alphabet characters into lowercase
        int idx = c - 'a';
        fre[idx]++;
    }

    cout << min({fre['e'-'a'],fre['g'-'a'],fre['y'-'a'],fre['p'-'a'],fre['t'-'a']}) << endl;

    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string s;
//     cin >> s;
//     int count[5];
//     for(int i=0;i<s.size();i++)
//     {
//         char c = s[i];
//         c = tolower(c); //converts alphabet characters into lowercase

//         if(c == 'e')
//         {
//             count[0]++;
//         }
//         if(c == 'g')
//         {
//             count[1]++;
//         }
//         if(c == 'y')
//         {
//             count[2]++;
//         }
//         if(c == 'p')
//         {
//             count[3]++;
//         }
//         if(c == 't')
//         {
//             count[4]++;
//         }
//     }

//     cout << min({count[0],count[1],count[2],count[3],count[4]}) << endl;

//     return 0;
// }