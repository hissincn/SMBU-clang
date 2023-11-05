// 输入华氏温度（F），按下列公式计算并输出对应的摄氏温度（C）：C＝5／9（ F－32）

// author 韩天泽 i@hissin.cn
// class 4
// date 2023/9/29

#include <stdio.h>

int main()
{
    float f, c;
    printf("请输入华氏温度\n");
    scanf("%f", &f);
    c = 5.0 / 9 * (f - 32);
    printf("摄氏温度：%f", c);
}