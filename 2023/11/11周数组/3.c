#include <stdio.h>
#include <string.h>

int isPalindrome(char *str)
{
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - 1 - i])
        {
            return 0; // 不是回文
        }
    }
    return 1; // 是回文
}

int main()
{
    char input[1000];

    printf("请输入一个字符串：\n");
    fgets(input, sizeof(input), stdin);

    // 去掉换行符
    input[strcspn(input, "\n")] = '\0';

    if (isPalindrome(input))
    {
        printf("该字符串是回文\n");
    }
    else
    {
        printf("该字符串不是回文\n");
    }

    return 0;
}
