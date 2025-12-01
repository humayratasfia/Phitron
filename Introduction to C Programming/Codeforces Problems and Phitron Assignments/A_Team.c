#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    int count2 = 0;
    int n[3];

    for (int i = 1; i <= t; i++)
    {
        int count1 = 0;

        for (int i = 0; i < 3; i++)
        {
            scanf("%d", &n[i]);

            if (n[i] == 1)
            {
                count1++;
                // printf("count 1 %d\n",count1);
            }
        }

        if (count1 >= 2)
        {
            count2++;
            // printf("count 2 %d\n",count2);
        }
    }

    printf("%d", count2);
    
    return 0;
}