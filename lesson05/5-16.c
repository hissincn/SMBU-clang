// 将一笔零钱换成5分、2分和1分的硬币，要求每种硬币至少有一枚，有几种不同的换法？输入在一行中给出待换的零钱数额x∈(8,100)。输出要求按5分、2分和1分硬币的数量依次从大到小的顺序，输出各种换法。每行输出一种换法，格式为：“fen5:5分硬币数量, fen2:2分硬币数量, fen1:1分硬币数量, total:硬币总数量”。最后一行输出“count = 换法个数”。
#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);

    int count = 0;

    for (int fen5 = x / 5; fen5 >= 1; fen5--)
    {
        for (int fen2 = x / 2; fen2 >= 1; fen2--)
        {
            for (int fen1 = x; fen1 >= 1; fen1--)
            {
                if (5 * fen5 + 2 * fen2 + fen1 == x)
                {
                    printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n", fen5, fen2, fen1, fen5 + fen2 + fen1);
                    count++;
                }
            }
        }
    }

    printf("count = %d\n", count);

    return 0;
}