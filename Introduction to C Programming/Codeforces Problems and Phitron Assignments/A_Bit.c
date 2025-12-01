#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);

    int x = 0;
    char s[4];

    for (int i = 1; i <= t; i++)
    {
        scanf("%s", s);

        if (strcmp(s, "X++") == 0)
        {
            x++;
        }
        else if (strcmp(s, "X--") == 0)
        {
            x--;
        }
        else if (strcmp(s, "++X") == 0)
        {
            ++x;
        }
        else if (strcmp(s, "--X") == 0)
        {
            --x;
        }
    }

    printf("%d\n", x);

    return 0;
}