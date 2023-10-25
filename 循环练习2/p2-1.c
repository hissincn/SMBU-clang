#include <stdio.h>

int main() {
    int a, n;
    scanf("%d,%d", &a, &n);

    int sum = 0;
    int current = 0;

    for (int i = 0; i < n; i++) {
        current = current * 10 + a;
        sum += current;

        if (i < n - 1) {
            printf("%d+", current);
        } else {
            printf("%d", current);
        }
    }

    printf("=%d\n", sum);

    return 0;
}
