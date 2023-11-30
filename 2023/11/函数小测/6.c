#include <stdio.h>

int main() {
    int rows, cols;

    scanf("%d", &rows);
    scanf("%d", &cols);

    // 声明二维数组
    int matrix[rows][cols];

    // 逐个输入二维数组的元素
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // 初始化最大值和最小值
    int max = matrix[0][0];
    int min = matrix[0][0];
    int maxRow = 0, maxCol = 0, minRow = 0, minCol = 0;

    // 循环遍历二维数组，找出最大值和最小值以及它们所在的行和列
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
                maxRow = i;
                maxCol = j;
            }
            if (matrix[i][j] < min) {
                min = matrix[i][j];
                minRow = i;
                minCol = j;
            }
        }
    }

    // 输出结果
    printf("最大元素为 %d，位于第 %d 行，第 %d 列\n", max, maxRow + 1, maxCol + 1);
    printf("最小元素为 %d，位于第 %d 行，第 %d 列\n", min, minRow + 1, minCol + 1);

    return 0;
}
