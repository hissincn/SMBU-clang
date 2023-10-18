#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    // 判断回文
    int temp = n;
    int reverse = 0;
    while (temp > 0)
    {
        reverse = reverse * 10 + temp % 10;
        temp /= 10;
    }
    if (reverse == n)
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }
    return 0;
}