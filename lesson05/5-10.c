#include <stdio.h>
int isPure(int n);
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    int count = 0;
    int sum = 0;
    for (int i = x; i <= y; i++)
    {
        if (isPure(i))
        {
            count++;
            sum += i;
        }
    }
    printf("%d %d\n", count, sum);
    return 0;
}

int isPure(int n)
{
    if (n <= 1)
    {
        return 0;
    }

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}