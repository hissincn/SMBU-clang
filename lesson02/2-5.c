// 海伦公式

// author 韩天泽 i@hissin.cn
// class 4
// date 2023/9/21

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, s, area;
    printf("请输入三角形的三条边长：");
    scanf("%f %f %f", &a, &b, &c);
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("三角形的面积为：%f\n", area);
}