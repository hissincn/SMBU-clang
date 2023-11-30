#include <stdio.h>

// 计算圆筒体积的函数
double calculateCylinderVolume(double radius, double height)
{
    const double pi = 3.141592653589793; // 圆周率
    return pi * radius * radius * height;
}

int main()
{
    double radius, height;

    printf("输入圆筒的半径和高r,h=?\n");
    scanf("%lf,%lf", &radius, &height);

    double volume = calculateCylinderVolume(radius, height);
    printf("圆筒的体积=    %.3f", volume);

    return 0;
}
