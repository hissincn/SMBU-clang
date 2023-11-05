//计算序列 1 + 2 + 3 + ... 的前N项之和
#include <stdio.h>
int main(void)
{
    int i, n, sum;
    scanf("%d", &n);
    sum = 0;
    for (i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("sum=%d\n", sum);
    return 0;
}