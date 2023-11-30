#include <stdio.h>
#include <string.h>

int main() {
    char str1[20], str2[20];

    gets(str1);
    gets(str2);

    // 使用strcpy函数将第一个字符串复制到第二个字符串
    strcpy(str2, str1);
    printf("After copying, str2: %s\n", str2);

    // 使用strcat函数将第二个字符串追加到第一个字符串的末尾，用空格连接
    strcat(str1, "");
    strcat(str1, str2);
    printf("After concatenation, str1: %s\n", str1);

    // 使用strcmp函数比较复制后的字符串和合并后的字符串是否相等
    if (strcmp(str2, str1) == 0) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }

    return 0;
}
