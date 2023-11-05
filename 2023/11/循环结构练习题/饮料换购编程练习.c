#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int total = n; // 初始买入的饮料数量
    int caps = n;  // 初始瓶盖数量与饮料数量相同

    while (caps >= 3)
    {
        int exchange = caps / 3;    // 可以兑换的饮料数量
        total += exchange;          // 喝到的饮料总数增加
        caps = exchange + caps % 3; // 更新剩余瓶盖数量
    }

    printf("%d\n", total);

    return 0;
}