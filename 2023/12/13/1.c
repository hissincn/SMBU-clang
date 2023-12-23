#include <stdio.h>
#include <stdlib.h>

// 将数字拆分为各个位的数组
void splitDigits(int num, int digits[]) {
    for (int i = 3; i >= 0; i--) {
        digits[i] = num % 10;
        num /= 10;
    }
}

// 将各个位的数组组合为数字
int combineDigits(int digits[]) {
    int result = 0;
    for (int i = 0; i < 4; i++) {
        result = result * 10 + digits[i];
    }
    return result;
}

// 按照题目要求排序数字
void sortDigits(int digits[], int ascending) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3 - i; j++) {
            if ((ascending && digits[j] > digits[j + 1]) ||
                (!ascending && digits[j] < digits[j + 1])) {
                int temp = digits[j];
                digits[j] = digits[j + 1];
                digits[j + 1] = temp;
            }
        }
    }
}

// 卡布列克运算递归函数
void kaprekar(int num) {
    if (num == 6174) {
        printf("成功得到6174\n");
        return;
    }

    // 将数字拆分为各个位
    int digits[4];
    splitDigits(num, digits);

    // 由大到小排列
    sortDigits(digits, 0);
    int maxNum = combineDigits(digits);

    // 由小到大排列
    sortDigits(digits, 1);
    int minNum = combineDigits(digits);

    // 计算差值
    int result = maxNum - minNum;

    // 输出结果
    printf("%d-%d=%d\n", maxNum, minNum, result);

    // 递归调用
    kaprekar(result);
}

int main() {
    int inputNum;

    printf("请输入一个各位数字不完全相同的4位数:\n");
    scanf("%d", &inputNum);

    if (inputNum < 1000 || inputNum > 9999) {
        printf("输入错误，请输入一个4位数。\n");
        return 1;
    }

    kaprekar(inputNum);

    return 0;
}
