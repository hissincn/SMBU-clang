#include <stdio.h>

int main()
{
    int numRows = 10;

    // 生成杨辉三角
    int triangle[numRows][numRows];
    for (int i = 0; i < numRows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
            {
                triangle[i][j] = 1;
            }
            else
            {
                triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
            }
        }
    }

    // 输出杨辉三角
    for (int i = 0; i < numRows; i++)
    {

        // 输出每行的元素
        for (int j = 0; j <= i; j++)
        {
            printf("%6d", triangle[i][j]);
        }

        printf("\n");
    }

    return 0;
}
