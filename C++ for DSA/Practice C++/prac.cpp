// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int a, b;
//     cin >> a >> b;
//     int mul = a * b;
//     cout << mul << endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i=1;i<=t;i++)
    {
        int tk;
        cin >> tk;
        int c = tk/5;
        int t = c;
        while(t>=3)
        {
            c = c + t/3;
            t = t/3 + t%3;
        }
        cout << c << endl;
    }
    return 0;
}




// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string s;
//     cin >> s;
    
//     int len = s.size();
//     char c[len+1];
    
//     for(int i=0;i<len;i++)
//     {
//         c[i] = tolower(s[i]);
//     }
//     reverse(c,c+len);
//     for(int i=0;i<len;i++)
//     {
//         cout << c[i];
//     }
//     return 0;
// }


// // #include <bits/stdc++.h>
// // using namespace std;

// // int main()
// // {
// //     int a, b;
// //     cin >> a >> b;
// //     int sum = a + b;
// //     cout << sum << endl;
// //     return 0;
// // }