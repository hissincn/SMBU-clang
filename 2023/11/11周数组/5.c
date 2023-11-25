#include <stdio.h>
#include <string.h>

void decode(char *str)
{
    for (int i = 0; str[i] != '\0'; ++i)
    {
        if ((str[i] >= 'A' && str[i] < 'Z') || (str[i] >= 'a' && str[i] < 'z'))
        {
            str[i]++;
        }
        else if (str[i] == 'Z')
        {
            str[i] = 'A';
        }
        else if (str[i] == 'z')
        {
            str[i] = 'a';
        }
    }
}

int main()
{
    char input[1000];

    printf("请输入一个字符串\n");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';
    decode(input);
    printf("译码结果：%s\n", input);

    return 0;
}
