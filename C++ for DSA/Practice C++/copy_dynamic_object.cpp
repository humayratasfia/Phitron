#include <bits/stdc++.h>
using namespace std;

class Cricketer
{
    public:
    string country;
    int jersey;
    
    Cricketer(string country, int jersey)
    {
        this->country = country;
        this->jersey = jersey;
    }
};

int main()
{
    Cricketer* mushfique = new Cricketer("Bangladesh", 100);
    Cricketer* taskin = new Cricketer("Bangladesh", 200);
    // cout << mushfique->jersey << endl;

    mushfique = taskin;
    delete taskin;
    cout << mushfique->country << " " << mushfique->jersey << endl;
    cout << taskin->country << " " << taskin->jersey << endl;
    return 0;
}