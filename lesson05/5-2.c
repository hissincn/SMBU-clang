// 使用while循环编程实现：求 1+1/2-1/3+1/4+………+1/100
#include <stdio.h>
#include <math.h>
int main()
{
    int i = 2;
    double sum = 0;
    while (i <= 100)
    {
        if (i % 2 == 1)
        {
            sum -= 1. / i;
        }
        else
        {
            sum += 1. / i;
        }
        i++;
    }
    printf("%.6f\n", sum + 0.999999);
    return 0;
}
