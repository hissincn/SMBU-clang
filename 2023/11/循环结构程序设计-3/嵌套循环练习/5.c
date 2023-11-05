#include <stdio.h>

int main()
{
    int total_combinations = 0;

    for (int i = 0; i <= 3; i++)
    {
        for (int j = 0; j <= 3; j++)
        {
            int k = 8 - i - j;
            if (k >= 0 && k <= 6)
            {
                printf("%2d:%d %d %d\n", total_combinations + 1, i, j, k);//2d is also adapt the fuuuuuuuucking answer
                total_combinations++;
            }
        }
    }

    return 0;
}
