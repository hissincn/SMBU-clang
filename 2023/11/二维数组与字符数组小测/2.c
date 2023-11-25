#include <stdio.h>

int main()
{
    int a[2][5] = {{1, 2, 3, 4, 5}, {10, 20, 30, 40, 50}};

    // 输出二维数组
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    // 输出一维数组
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%4d", a[i][j]);
        }
    }

    return 0;
}
