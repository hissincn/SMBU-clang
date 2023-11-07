#include <stdio.h>

int main()
{
    char input[1000];
    fgets(input, sizeof(input), stdin);

    int count = 0;
    for (int i = 0; input[i] != '\0'; i++)
    {
        if ((input[i] >= 'A' && input[i] <= 'Z') || (input[i] >= 'a' && input[i] <= 'z'))
        {
            printf("%c", input[i]);
            count++;
        }
    }

    if (count > 0)
    {
        printf(" %d\n", count);
    }
    else
    {
        printf("-1\n");
    }

    return 0;
}
