#include <stdio.h>
int main()
{
    int line;
    scanf("%d", &line);
    int c = 0, r = 0, f = 0;
    for (int i = 1; i <= line; i++)
    {
        int num;
        char type;
        scanf("%d %c", &num, &type);
        if (type == 'C')
        {
            c += num;
        }
        else if (type == 'R')
        {
            r += num;
        }
        else if (type == 'F')
        {
            f += num;
        }
    }
    printf("Total: %d animals\n", c + r + f);
    printf("Total coneys: %d\n", c);
    printf("Total rats: %d\n", r);
    printf("Total frogs: %d\n", f);
    printf("Percentage of coneys: %.2f %%\n", (float)c / (c + r + f) * 100);
    printf("Percentage of rats: %.2f %%\n", (float)r / (c + r + f) * 100);
    printf("Percentage of frogs: %.2f %%\n", (float)f / (c + r + f) * 100);
}