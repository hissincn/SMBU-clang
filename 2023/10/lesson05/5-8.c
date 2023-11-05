#include <stdio.h>
int main()
{
    int h, n;
    scanf("%d %d", &h, &n);
    // 输出皮球第n次落地时在空中经过的距离、以及第n次反弹的高度
    double sum = h;
    double height = h;
    for (int i = 1; i < n; i++)
    {
        height /= 2;
        sum += height * 2;
    }
    printf("%.1lf %.1lf\n", sum, height / 2);
    return 0;
}