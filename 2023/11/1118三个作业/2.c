#include <stdio.h>

int main()
{
    int array[] = {12, 34, 56, 10, 78, 90, 23, 45, 67, 89, 10};
    int target;

    scanf("%d", &target);

    int found = 0;
    int position = -1; // 初始位置设为-1，表示未找到

    // 遍历数组
    for (int i = 0; i < sizeof(array) / sizeof(array[0]); ++i)
    {
        if (array[i] == target)
        {
            found = 1;
            position = i + 1; // 数组下标从0开始，位置从1开始计数
            break;            // 找到目标元素后退出循环
        }
    }

    // 输出查找结果
    if (found)
    {
        printf("%d\n", position);
    }
    else
    {
        printf("Element %d is not found in the array\n", target);
    }

    return 0;
}
