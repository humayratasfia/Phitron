#include <stdio.h>
#include <limits.h>

void solve()
{
    int n;
    scanf("%d", &n);

    int a[n + 1];
    a[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }

    int minsum = INT_MAX;
    // take the max integer as minimum sum

    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            int sum = a[i] + a[j] + j - i;

            if (sum < minsum)
            {
                minsum = sum;
            }
        }
    }
    printf("%d\n", minsum);
}

int main()
{
    int t;
    scanf("%d", &t);
    
    for (int i = 1; i <= t; i++)
    {
        solve();
    }
    return 0;
}
