#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main() {
    int n = 10;
    int numbers[10];

    // 输入10个数
    for (int i = 0; i < n; ++i) {
        scanf("%d", &numbers[i]);
    }

    // 使用冒泡排序法对数组进行排序
    bubbleSort(numbers, n);

    // 输出排序后的结果
    for (int i = 0; i < n; ++i) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
