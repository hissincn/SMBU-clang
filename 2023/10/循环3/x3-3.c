#include <stdio.h>
int cul(int n)
{
    int count = 0;
    while (n != 1)
    {
        if (n % 2 == 0)
        {
            // 偶数
            n = n / 2;
        }
        else
        {
            // 奇数
            n = 3 * n + 1;
        }
        count++;
    }
    return count;
}
int main()
{
    int len;
    scanf("%d", &len);
    //初始化数组
    int arr[len];
    for (int i = 0; i < len; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < len; i++)
    {
        printf("%d ", cul(arr[i]));
    }
    printf("\n");
}