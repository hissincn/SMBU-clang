//计算序列 1 + 1/3 + 1/5 + ... 的前N项之和。输入：在一行中给出一个正整数N。输出：在一行中按照“sum = S”的格式输出部分和的值S，精确到小数点后6位。题目保证计算结果不超过双精度范围。
#include <stdio.h>
int main(void)
{
    int i, n;
    double sum, t;
    scanf("%d", &n);
    sum = 0;
    t = 1;
    for (i = 1; i <= n; i++)
    {
        sum += 1 / t;
        t += 2;
    }
    printf("sum=%.6f\n", sum);
    return 0;
}