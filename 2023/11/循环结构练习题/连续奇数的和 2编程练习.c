#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        int X, Y;
        scanf("%d %d", &X, &Y);

        int min_val = (X < Y) ? X : Y;
        int max_val = (X > Y) ? X : Y;

        int odd_sum = 0;

        for (int j = min_val + 1; j < max_val; j++)
        {
            if (j % 2 != 0)
            {
                odd_sum += j;
            }
        }

        printf("%d\n", odd_sum);
    }

    return 0;
}
