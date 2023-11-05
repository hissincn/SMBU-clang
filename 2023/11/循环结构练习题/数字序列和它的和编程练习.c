#include <stdio.h>

int main()
{
    int M, N;

    while (scanf("%d %d", &M, &N) == 2 && M > 0 && N > 0)
    {
        int min_val = (M < N) ? M : N;
        int max_val = (M > N) ? M : N;

        printf("%d", min_val);
        int sum = min_val;

        for (int i = min_val + 1; i <= max_val; i++)
        {
            printf(" %d", i);
            sum += i;
        }

        printf(" Sum=%d\n", sum);
    }

    return 0;
}
