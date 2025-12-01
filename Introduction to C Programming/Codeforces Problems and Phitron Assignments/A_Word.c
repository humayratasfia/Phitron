#include <stdio.h>

int main()
{
    char word[101];
    scanf("%s", word);

    int countA = 0, counta = 0;
    for (int i = 0; word[i] != '\0'; i++)
    {
        if (word[i] >= 'A' && word[i] <= 'Z')
        {
            countA++;
        }
        else if (word[i] >= 'a' && word[i] <= 'z')
        {
            counta++;
        }
    }

    // printf("%d\n",countA);
    // printf("%d\n",counta);

    for (int i = 0; word[i] != '\0'; i++)
    {
        if (countA <= counta)
        {
            if (word[i] >= 'A' && word[i] <= 'Z')
            {
                word[i] = word[i] + 32;
            }
        }
        else if (countA > counta)
        {
            if (word[i] >= 'a' && word[i] <= 'z')
            {
                word[i] = word[i] - 32;
            }
        }
    }

    printf("%s", word);

    return 0;
}