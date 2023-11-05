//author 韩天泽 i@hissin.cn
//class 4
//date 2023/9/12

#include <stdio.h>

int main()
{
    int a, b;

    printf("请输入矩形的长和宽：");
    scanf("%d %d", &a, &b);

    printf("矩形的面积是%d\n", a * b);
    printf("矩形的周长是%d", 2 * (a + b));
}