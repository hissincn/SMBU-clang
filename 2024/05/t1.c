#include <stdio.h>

int main() {
    float numbers[10];
    float sum = 0.0;
    float average;

    // 从键盘输入10个float类型的数据
    for (int i = 0; i < 10; i++) {
        scanf("%f", &numbers[i]);
        sum += numbers[i];
    }

    // 计算平均值
    average = sum / 10;

    // 输出平均值，保留两位小数
    printf("%.2f\n", average);

    return 0;
}
