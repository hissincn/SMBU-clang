#include <stdio.h>

int isPrime(int num)
{
    if (num <= 1)
    {
        return 0; // false
    }
    for (int i = 2; i * i <= num; ++i)
    {
        if (num % i == 0)
        {
            return 0; // false
        }
    }
    return 1; // true
}

int main()
{
    int maxNum = 20; // 验证1~20的偶数
    int found = 0;   // 记录找到的表示形式的数量

    for (int num = 4; num <= maxNum; num += 2)
    {

        for (int i = 2; i <= num / 2; i++) // 修改这里的递增方式为i++
        {
            if (isPrime(i) && isPrime(num - i))
            {
                printf("%3d=%3d+%3d", num, i, num - i);
                ++found;
                printf(",");
                if (found % 5 == 0)
                {
                    printf("\n");
                }
            }
        }
    }

    return 0;
}
