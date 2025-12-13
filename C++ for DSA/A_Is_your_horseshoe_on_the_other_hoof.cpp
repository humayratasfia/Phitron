#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[4];

    int count = 0;
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 4 - 1; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
    }
    if (count == 3)
    {
        cout << count - 1 << endl;
    }
    else if (count == 6)
    {
        cout << count - 3 << endl;
    }
    else
    {
        cout << count << endl;
    }
}

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int a[4];
//     for(int i=0;i<4;i++)
//     {
//         cin >> a[i];
//     }
//     int max = a[0];
//     for(int i=0;i<4;i++)
//     {
//         if(a[i]>max)
//         {
//             max = a[i];
//         }
//     }
//     int b[max+1];
//     for(int i=0;i<=max;i++)
//     {
//         b[i] = 0;
//     }
//     for(int i=0;i<4;i++)
//     {
//         if(a[i]>0)
//         {
//             b[a[i]] = 1;
//         }
//     }
//     int sum = 0;
//     for(int i=0;i<=max;i++)
//     {
//         sum = sum + b[i];
//     }
//     int required = 4 - sum;

//     cout << required << endl;
//     return 0;
// }