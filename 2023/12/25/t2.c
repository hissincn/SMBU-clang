#include <stdio.h>

// 定义函数 f(x)
double calculateFunction(double x) {
    return 1.5 * x;
}

int main() {
    // 输入 x 的值
    double x;
    scanf("%lf", &x);

    // 检查 x 是否在范围内
    if (x >= 0 && x <= 10) {
        // 计算并输出 y 的值
        double y = calculateFunction(x);
        printf("y=%.2lf\n", y);
    } else {
        // 输出错误消息
        printf("x is not within its range of values.\n");
    }

    return 0;
}
