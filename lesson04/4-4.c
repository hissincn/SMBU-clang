#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    float e = b * b - 4 * a * c;
    if (e < 0)
    {
        printf("The equation has no real solutions.\n");
    }
    else
    {
        float x1 = (-b + sqrt(e)) / (2 * a);
        float x2 = (-b - sqrt(e)) / (2 * a);
        //保留三位小数
        printf("x1=%.3f x2=%.3f\n", x1, x2);

    }
}