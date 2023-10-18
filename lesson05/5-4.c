/// 利用do...while编程实现：将一个正整数分解质因数。例如：输入90,打印出90=2*3*3*5。设待分解质因子的正整数为num，循环变量初始值i=2，循环条件为(i<num),则在循环体中加入：1）若num%i==0，输出2为一个质因子，则：num=num/i，同时置i=1（2）i++

#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    printf("%d=", num);

    int i = 2;
    int flag = 0; // 用于标记是否已输出过质因数

    do
    {
        if (num % i == 0)
        {
            if (flag == 1)
            {
                printf("*");
            }
            printf("%d", i);
            num = num / i;
            flag = 1;
        }
        else
        {
            i++;
        }
    } while (i <= num);

    printf("\n");

    return 0;
}