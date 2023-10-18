#include <stdio.h>

int main()
{
    char input[100]; // 假设输入行不超过100个字符
    int blank_count = 0, digit_count = 0, other_count = 0;

    fgets(input, sizeof(input), stdin); // 从标准输入读取一行字符

    for (int i = 0; input[i] != '\0'; i++)
    {
        if (input[i] == ' ')
        {
            blank_count++;
        }
        else if (input[i] >= '0' && input[i] <= '9')
        {
            digit_count++;
        }
        else if (input[i] != '\n' && input[i] != '\r')
        {
            other_count++;
        }
    }

    printf("blank=%d,digit=%d,other=%d\n", blank_count, digit_count, other_count);

    return 0;
}
