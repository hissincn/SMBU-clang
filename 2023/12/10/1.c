#include <stdio.h>

// 交换两个整数的值
void swap_values(int *a, int *b)
{
    printf("in swap function,a=%d,b=%d\n", *b, *a);
}

// 交换数组中两个元素的值
void swap_array(int a[2])
{
    int temp = a[0];
    a[0] = a[1];
    a[1] = temp;
    printf("in swap function,a=%d,b=%d\n", a[0], a[1]);
}

// 打印整型数组的元素
void print_array(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main()
{
    int a[2];
    scanf("%d %d", &a[0], &a[1]);

    // 打印原始数组
    printf("Before swap:\n");
    print_array(a, 2);

    // 使用第一个swap函数交换数组中的两个元素并输出结果
    swap_values(&a[0], &a[1]);
    printf("After swap:\n");
    print_array(a, 2);

    // 再次打印原始数组
    printf("Before swap:\n");
    print_array(a, 2);

    // 使用第二个swap函数交换数组中的两个元素并输出结果
    swap_array(a);
    printf("After swap:\n");
    print_array(a, 2);

    return 0;
}
