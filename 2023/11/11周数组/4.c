#include <stdio.h>

int main()
{
    double numbers[5];
    double sum = 0.0;
    double average;

    printf("请输入任意5个数的数值数组：\n");

    // 输入五个数值
    for (int i = 0; i < 5; i++)
    {
        scanf("%lf", &numbers[i]);
        sum += numbers[i];
    }

    // 计算平均值
    average = sum / 5;

    // 输出结果
    printf("数组的和=%f,平均值=%f\n", sum, average);

    return 0;
}
