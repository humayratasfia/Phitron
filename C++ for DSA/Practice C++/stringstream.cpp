#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    cout << s << endl;

    /* stringstream - 
    Splitting a sentence into words: 
    Extracting words one by one in a loop, 
    delimited by spaces. */
    stringstream ss(s);
    string word;
    while(ss >> word)
    {
    cout << word << endl;
    }
    return 0;
}