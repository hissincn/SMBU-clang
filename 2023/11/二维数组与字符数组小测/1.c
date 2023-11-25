#include <stdio.h>

int main()
{
    int a[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int diagonalSum = 0;

    // 计算主对角线的和
    for (int i = 0; i < 4; i++)
    {
        diagonalSum += a[i][i];
    }

    // 计算副对角线的和
    for (int i = 0; i < 4; i++)
    {
        diagonalSum += a[i][3 - i];
    }

    // 输出矩阵
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }

    printf("矩阵的对角线和=%d\n", diagonalSum / 2);

    return 0;
}
