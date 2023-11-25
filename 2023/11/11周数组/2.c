//使用一维数组统计输入字符的英文大写字母，小写字母，数字，空格，以及其他字符的个数。
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, len, big = 0, small = 0, num = 0, space = 0, other = 0;

    fgets(str, sizeof(str), stdin);
    return 0;
    len = strlen(str);

    for (i = 0; i < len; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            big++;
        else if (str[i] >= 'a' && str[i] <= 'z')
            small++;
        else if (str[i] >= '0' && str[i] <= '9')
            num++;
        else if (str[i] == ' ')
            space++;
        else
            other++;
    }

    printf("大写字母：%d\n", big);
    printf("小写字母：%d\n", small);
    printf("数字：%d\n", num);
    printf("空格：%d\n", space);
    printf("其他字符：%d\n", other);

    return 0;
}