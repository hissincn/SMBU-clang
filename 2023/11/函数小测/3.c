#include <stdio.h>

// 判断一个数字是否为水仙花数的函数
int isNarcissistic(int num)
{
    int originalNum = num;
    int sum = 0;

    while (num > 0)
    {
        int digit = num % 10;
        sum += digit * digit * digit;
        num /= 10;
    }

    return sum == originalNum;
}

int main()
{
    printf("输出100-999内所有的水仙花数字\n");

    for (int num = 100; num <= 999; ++num)
    {
        if (isNarcissistic(num))
        {
            printf("%4d", num);

            // 控制输出格式
            if ((num - 99) % 10 == 0)
            {
                printf("\n");
            }
        }
    }

    return 0;
}
