#include <stdio.h>

int main()
{
    int a, n;
    scanf("%d,%d", &a, &n);

    int sum = 0;
    int current = 0;

    for (int i = 0; i < n; i++)
    {
        current = current * 10 + a;
        sum += current;
    }
    printf("Input a=?,n=?\na+aa+aaa+...=%d\n", sum);

    return 0;
}
