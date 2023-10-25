#include <stdio.h>
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
int main()
{
    int n, p, q;
    scanf("%d", &n);
    printf("%d=", n);
    for (int i; i <= 2000000000; i++)
    {
        if (isPure(i) && isPure(n - i))
        {
            p = i;
            q = n - i;
            break;
        }
    }
    printf("%d+%d\n", p, q);
}