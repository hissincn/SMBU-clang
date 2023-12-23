#include <stdio.h>

// 函数声明
void reverseAndSum(int num);

int main() {
    int inputNum;

    // 输入提示
    printf("请输入4位正整数:\n");
    scanf("%d", &inputNum);

    // 检查输入是否为4位数
    if (inputNum < 1000 || inputNum > 9999) {
        printf("输入错误，请输入一个4位数。\n");
        return 1;
    }

    // 调用函数输出反序数并计算各位数字之和
    reverseAndSum(inputNum);

    return 0;
}

// 函数定义
void reverseAndSum(int num) {
    int reversedNum = 0;
    int sum = 0;
    int digits[4];

    // 反序数和各位数字之和的计算
    for (int i = 0; i < 4; i++) {
        digits[i] = num % 10;
        reversedNum = reversedNum * 10 + digits[i];
        sum += digits[i];
        num /= 10;
    }

    // 输出结果
    printf("输入的反序数是：\n%d\n", reversedNum);
    printf("每位数字的和=%d\n", sum);
}
