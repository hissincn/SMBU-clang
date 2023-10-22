//给定两个均不超过9的正整数a和n，要求编写程序求a+aa+aaa++⋯+aa⋯a（n个a）之和。输入：输入在一行中给出不超过9的正整数a和n。输出：在一行中按照“s=对应的和”的格式输出。

#include <stdio.h>
int main(void)
{
    int a, n, i, sum, t;
    scanf("%d %d", &a, &n);
    sum = 0;
    t = a;
    for (i = 1; i <= n; i++)
    {
        sum += t;
        t = t * 10 + a;
    }
    printf("s=%d\n", sum);
    return 0;
}

