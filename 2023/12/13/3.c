#include <stdio.h>

int calculateAge(int n) {
    if (n == 1) {
        return 12;
    } else {
        return calculateAge(n - 1) + 2;
    }
}

int main() {
    int firstPersonAge = calculateAge(5);
    printf("第一个人的岁数为%d岁\n", firstPersonAge);
    return 0;
}