#include <stdio.h>
#include <ctype.h> // 用于字符类型检查

#define MAX_CHAR 256 // ASCII 字符的最大可能值

int main()
{
    char str[MAX_CHAR];
    int count[MAX_CHAR] = {0}; // 初始化字符计数数组
    int other = 0;
    int i;

    printf("请输入一个字符串:\n");
    fgets(str, MAX_CHAR, stdin); // 读取字符串

    // 统计每个字符的出现次数
    for (i = 0; str[i] != '\0'; ++i)
    {
        if (isalpha(str[i]))
        {
            count[tolower(str[i])]++;
        }
        else if (str[i] != '\n' && str[i] != '\r')
        {
            other++;
        }
    }

    // 打印统计结果
    for (i = 0; i < MAX_CHAR; ++i)
    {
        if (count[i] > 0)
        {
            printf("%c=%d ", i, count[i]);
        }
    }
    printf("other=%d\n", other);

    return 0;
}
