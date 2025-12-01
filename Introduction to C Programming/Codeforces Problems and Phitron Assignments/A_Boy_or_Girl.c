#include <stdio.h>
#include <string.h>

int main()
{
    char name[101];
    scanf("%s", name);

    int check[27] = {0};
    int value;
    for (int i = 0; i < strlen(name); i++)
    {
        // scanf("%c", &name[i]);
        for (int j = 0; j < 26; j++)
        {
            value = name[i] - 97;

            if (check[value] == 0 && check[value] != 1)
            {
                check[value] = 1;
            }
        }
    }

    int sum = 0;
    for (int i = 0; i < 26; i++)
    {
        sum = sum + check[i];
    }
    // printf("%d\n", sum);

    if (sum % 2 != 0)
    {
        printf("IGNORE HIM!\n");
    }
    else if (sum%2==0)
    {
        printf("CHAT WITH HER!\n");
    }
    return 0;
}