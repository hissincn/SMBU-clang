// 流程图二
// 猜数字:随机1-99数组，猜测数字，提示大了小了，直到猜对为止

// author 韩天泽 i@hissin.cn
// class 4
// date 2023/9/21

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // 生成1-99随机数
    int num = rand() % 100;

    // 猜测数字
    int guess;

    while (guess != num)
    {
        printf("请输入你猜测的数字: ");
        scanf("%d", &guess);

        if (guess == num)
        {
            printf("恭喜你猜对了!\n");
        }
        else if (guess > num)
        {
            printf("你猜的数字大了!\n");
        }
        else
        {
            printf("你猜的数字小了!\n");
        }
    }
}