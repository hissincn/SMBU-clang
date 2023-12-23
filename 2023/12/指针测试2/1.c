#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char max[100];
    int index = 0;
    int len, max_len = 0;

    while (1)
    {
        scanf("%s", str);
        len = strlen(str);
        max_len = strlen(max);
        if (strcmp(str, "stop") == 0)
        {
            break;
        }
        if (len > max_len)
        {
            strcpy(max, str);
        }
        printf("%d:%d\n", index++, len);
    }
    printf("%s\n", max);
    return 0;
}