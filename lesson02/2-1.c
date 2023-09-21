//流程图一
//对输入的两个正整数，使用辗转相除法求最大公约数。
//输入：两个正整数
//输出：最大公约数

//author 韩天泽 i@hissin.cn
//class 4
//date 2023/9/21

#include <stdio.h>

int main (void)
{
    int a, b, res;
    printf("请输入两个正整数: ");
    scanf("%d %d", &a, &b);
    while (b != 0)
    {
        res = a % b;
        a = b;
        b = res;
    }
    printf("最大公约数: %d\n", a);
    return 0;
}