#include <stdio.h>

// 定义Ackermann函数
int ack(int m, int n)
{
    if (m == 0)
    {
        return n + 1;
    }
    else if (n == 0)
    {
        return ack(m - 1, 1);
    }
    else
    {
        return ack(m - 1, ack(m, n - 1));
    }
}

int main()
{
    int m, n;

    // 输入m和n的值
    printf("请输入正整数m=?,n=?\n");
    scanf("%d,%d", &m, &n);

    // 计算Ackermann函数的结果并输出
    int result = ack(m, n);
    printf("结果=%d\n", result);

    return 0;
}
