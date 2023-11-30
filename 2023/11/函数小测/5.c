#include <stdio.h>

double px(double x, int n)
{
    if (n == 1)
    {
        return x;
    }
    else
    {
        return x * (1 - px(x, n - 1));
    }
}

int main()
{
    double x;
    int n;

    // 从用户输入获取 x 和 n 的值
    printf("input x=?  n=?\n");
    scanf("%lf,%d", &x, &n);

    // 调用递归函数计算 px(x, n)
    double result = px(x, n);

    // 打印结果
    printf("sum=%f\n", result);

    return 0;
}
