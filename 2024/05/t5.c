#include <stdio.h>
#include <string.h>
#include <ctype.h>

void trim(char *str);

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    trim(str);
    printf("%s\n", str);
    return 0;
}

void trim(char *str) {
    int start = 0, end = strlen(str) - 1;
    while (isspace((unsigned char)str[start])) start++;
    while (end >= start && isspace((unsigned char)str[end])) end--;
    int i = 0;
    while (start <= end) str[i++] = str[start++];
    str[i] = '\0';
}
