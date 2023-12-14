#include <stdio.h>

int main()
{
    char *str = "We are learning pointers of C language";
    int words = 1;
    while (*str != '\0')
    {
        if (*str == ' ')
        {
            words++;
        }
        str++;
    }
    printf("%d\n", words);

    return 0;
}