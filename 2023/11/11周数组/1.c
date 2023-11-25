#include <stdio.h>
int main()
{
    int a[10] = {10, 20, 30, 40, 50, 0, 1, 2, 3, 4};
    int i, temp;
    for (i = 0; i < 5; i++)
    {
        temp = a[i];
        a[i] = a[i + 5];
        a[i + 5] = temp;
    }
    for (i = 0; i < 10; i++)
    {
        printf("%3d", a[i]);
    }
    return 0;
}