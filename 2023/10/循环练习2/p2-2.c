#include <stdio.h>
int main()
{
    // 100-999水仙花
    for (int i = 100; i <= 999; i++)
    {
        int a = i / 100;
        int b = i / 10 % 10;
        int c = i % 10;
        if (a * a * a + b * b * b + c * c * c == i)
        {
            printf("flower=%d\n", i);
        }
    }
}
