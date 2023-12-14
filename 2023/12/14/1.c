#include <stdio.h>

void rank(int *a, int *b, int *c)
{
    int temp;
    if (*a > *b)
    {
        temp = *a;
        *a = *b;
        *b = temp;
    }
    if (*a > *c)
    {
        temp = *a;
        *a = *c;
        *c = temp;
    }
    if (*b > *c)
    {
        temp = *b;
        *b = *c;
        *c = temp;
    }
}
int main()
{
    int a, b, c;
    printf("请输入3个整数变量 n1, n2, n3:\n");
    scanf("%d,%d,%d", &a, &b, &c);
    rank(&a, &b, &c);
    printf("排序后： %d, %d, %d", a, b, c);
    return 0;
}