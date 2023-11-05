// 四行由*号组成的等腰三角形

// author 韩天泽 i@hissin.cn
// class 4
// date 2023/9/29

#include <stdio.h>

int main()
{
    int line = 4;
    for (int i = 1; i <= line; i++)
    {
        for (int j = 1; j <= line - i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}