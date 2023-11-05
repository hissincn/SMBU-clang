// 输入三角型的三条边长，求其面积。对于不合理的边长输入要输出数据错误的提示信息。

// author 韩天泽 i@hissin.cn
// class 4
// date 2023/9/29

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, s, area;
    printf("请输入三角形的三条边长：");
    scanf("%f %f %f", &a, &b, &c);

    // 判断是否为三角形
    if (a + b <= c || a + c <= b || b + c <= a)
    {
        printf("输入的三条边长不能构成三角形\n");
        return 0;
    }
    else
    {
        s = (a + b + c) / 2;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        printf("三角形的面积为：%f\n", area);
    }
}