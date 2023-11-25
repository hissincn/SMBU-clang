#include <stdio.h>

int main()
{
    int a[10] = {1, 2, 3, 4, 5, 0, 0, 0, 0, 0}; // 初始化数组

    int n;
    scanf("%d", &n);

    if (n > 10)
    {
        n = 10;
    }

    for (int i = 0; i < n; ++i)
    {
        printf("%d ", a[i]);
    }

    printf("\n");

    return 0;
}
