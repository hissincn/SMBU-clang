#include <stdio.h>
#include <math.h>
int main()
{
    int x;
    float y;
    scanf("%d", &x);
    if (x >= 0 && x < 2)
    {
        y = -x + 2.5;
        printf("y=%.2f\n", y);
    }
    else if (x >= 2 && x < 4)
    {
        y = 2 - 1.5 * (x - 3) * (x - 3);
        printf("y=%.2f\n", y);
    }
    else if (x >= 4 && x < 6)
    {
        y = x / 2 - 1.5;
        printf("y=%.2f\n", y);
    }
    else
    {
        printf("x is not within its range of values.\n");
    }
}