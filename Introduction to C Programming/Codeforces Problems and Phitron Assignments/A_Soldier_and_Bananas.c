#include <stdio.h>

int main()
{
    int k, n, w;
    scanf("%d %d %d", &k, &n, &w);

    int total = 0;
    for (int i = 1; i <= w; i++)
    {
        total = total + k * i;
    }

    if (total <= n)
    {
        printf("0");
    }
    else if (total > n)
    {
        printf("%d", total - n);
    }
    return 0;
}