#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char input[1000]; // 假设输入的字符串不超过1000个字符
    char output[1000]; // 用于存储提取的英文字母
    int count = 0; // 用于统计英文字母的数量

    // 读取整行输入，包括空格
    fgets(input, sizeof(input), stdin);

    // 遍历输入字符串
    for (int i = 0; input[i] != '\0'; i++) {
        // 检查字符是否为英文字母
        if (isalpha(input[i])) {
            output[count++] = input[i]; // 添加到输出字符串
        }
    }
    output[count] = '\0'; // 确保输出字符串以空字符结尾

    // 输出提取的英文字母和字母的数量
    printf("%s %d\n", output, count);

    return 0;
}
