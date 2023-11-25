#include <stdio.h>

int main()
{
    int a[5][3] = {{80, 75, 92}, {61, 65, 71}, {59, 63, 70}, {85, 87, 90}, {76, 77, 85}}; // 二维数组保存成绩
    int sumX = 0, sumY = 0, sumZ = 0;                                                     // 各科总分

    for (int i = 0; i < 5; i++)
    {
        sumX += a[i][0];
        sumY += a[i][1];
        sumZ += a[i][2];
    }
    printf("C语言：%.1f\n", (double)sumX / 5);
    printf("高数：%.1f\n", (double)sumY / 5);
    printf("线代：%.1f\n", (double)sumZ / 5);

    double avgX = (double)sumX / 5;
    double avgY = (double)sumY / 5;
    double avgZ = (double)sumZ / 5;
    printf("\n总成绩平均=%.4f\n", (avgX + avgY + avgZ) / 3);

    return 0;
}
