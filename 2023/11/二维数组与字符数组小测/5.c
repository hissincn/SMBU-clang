#include <stdio.h>
#include <string.h>

int main()
{
    char s[5][20];
    int i, j;

    printf("输入5个字符串 :\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%s", s[i]);
    }

    // 冒泡排序
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4 - i; j++)
        {
            if (strcmp(s[j], s[j + 1]) > 0)
            {
                // 交换字符串
                char temp[20];
                strcpy(temp, s[j]);
                strcpy(s[j], s[j + 1]);
                strcpy(s[j + 1], temp);
            }
        }
    }

    // 输出排序后的字符串
    printf("排序后输出的字符为：\n");
    for (i = 0; i < 5; i++)
    {
        printf("%s\n", s[i]);
    }

    return 0;
}
