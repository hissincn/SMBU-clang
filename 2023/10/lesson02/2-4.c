// 运算

// author 韩天泽 i@hissin.cn
// class 4
// date 2023/9/21

#include <stdio.h>

int main()
{
    int a, result;
    printf("请输入一个整数：");
    scanf("%d", &a);
    result = (a + 10) * (a + 10) + 168;
    printf("%d\n", result);
}