// 设输入圆的半径为 R，求圆的周长及面积。要求输出Ｒ及结果。

// author 韩天泽 i@hissin.cn
// class 4
// date 2023/9/29

#include <stdio.h>

int main(){
    printf("请输入圆的半径：");
    float r;
    scanf("%f", &r);

    float round = 2 * 3.14 * r;
    float area = 3.14 * r * r;

    printf("圆的周长为：%f\n", round);
    printf("圆的面积为：%f\n", area);

}