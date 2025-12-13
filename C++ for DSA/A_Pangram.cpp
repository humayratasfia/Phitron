#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char s[n+1];
    char c[n+1];
    for(int i=0;i<n;i++)
    {
        cin >> s[i];
        c[i] = tolower(s[i]);
    }
    int fre[26] = {0};
    for(int i=0;i<n;i++)
    {
        fre[c[i] - 'a']++;
    }
    int pangram = 1;
    for(int i=0;i<26;i++)
    {
        if(fre[i]==0)
        {
            pangram = 0;
            break;
        }
    }
    if(pangram==0)
    {
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     string s;
//     cin >> s;
    
//     // Frequency array to track which letters we've seen
//     int fre[26] = {0};
    
//     // Count each letter (convert to lowercase first)
//     for(int i=0; i<n; i++)
//     {
//         char ch = tolower(s[i]);
//         fre[ch - 'a']++;
//     }
    
//     // Check if all 26 letters appeared at least once
//     for(int i=0; i<26; i++)
//     {
//         if(fre[i] == 0)
//         {
//             cout << "NO" << endl;
//             return 0;  // Exit immediately when we find a missing letter
//         }
//     }
    
//     cout << "YES" << endl;
//     return 0;
// }