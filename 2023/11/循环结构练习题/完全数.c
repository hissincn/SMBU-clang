#include <stdio.h>

// 计算约数之和
int calculateDivisorsSum(int num)
{
    int sum = 1; // 1 一定是每个数的约数，所以初始和为1
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            sum += i;
            if (i != num / i)
            {
                sum += num / i;
            }
        }
    }
    return sum;
}

int main()
{
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        int X;
        scanf("%d", &X);

        int sum = calculateDivisorsSum(X);

        if (sum == X)
        {
            printf("%d is perfect\n", X);
        }
        else
        {
            printf("%d is not perfect\n", X);
        }
    }

    return 0;
}
