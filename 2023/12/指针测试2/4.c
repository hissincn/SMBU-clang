#include <stdio.h>
#include <string.h>

void bubble_sort(char *p[], int n)
{
    int i, j;
    char *temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (strcmp(p[j], p[j + 1]) > 0)
            {
                temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%s\n", p[i]);
    }
}

int main()
{
    char *p[6] = {
        "python",
        "orange",
        "apple",
        "windows",
        "peach",
        "banana"};
    bubble_sort(p, 6);
}