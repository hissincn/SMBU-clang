#include <stdio.h>

int main()
{
    int size;

    scanf("%d", &size);

    int array[size];
    for (int i = 0; i < size; ++i)
    {
        scanf("%d", &array[i]);
    }

    int max = array[0];
    int min = array[0];

    for (int i = 1; i < size; ++i)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
        if (array[i] < min)
        {
            min = array[i];
        }
    }

    // 输出最大值和最小值
    printf("max: %d\n", max);
    printf("min: %d\n", min);

    return 0;
}
