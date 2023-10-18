//使用while循环编程实现：输入一个任意整数求逆序数
#include<stdio.h>
int main()
{
    int x, y = 0;
    scanf("%d", &x);
    while (x != 0)
    {
        y = y * 10 + x % 10;
        x = x / 10;
    }
    printf("%d\n", y);
    return 0;
}