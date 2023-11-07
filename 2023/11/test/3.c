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