#include <stdio.h>
void line(int h, int i)
{
    for (int j = 1; j <= h - i; j++)
    {
        printf("  ");
    }
    for (int k = 1; k <= i; k++)
    {
        if (k >= 10)
        {
            printf("%d", k);
        }
        else
        {
            printf(" %d", k);
        }
    }
    for (int k = 1; k < i; k++)
    {
        if (i - k >= 10)
        {
            printf("%d", i - k);
        }
        else
        {
            printf(" %d", i - k);
        }
    }
    for (int j = 1; j <= h - i; j++)
    {
        printf("  ");
    }
    printf("\n");
}
int main()
{
    printf("请输入行数n=?\n");
    int h;
    scanf("%d", &h);
    for (int i = 1; i <= 2 * h - 1; i++)
    {
        if (i <= h)
        {
            line(h, i);
        }
        else
        {
            line(h, 2 * h - i);
        }
    }
}