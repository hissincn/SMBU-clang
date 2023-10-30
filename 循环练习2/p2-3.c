#include <stdio.h>

int main()
{
    long a = 0, b = 1, nextTerm;
    int count = 20;
    int printed = 0;
    int printedCount = 0;

    while (printedCount < count)
    {
        if (a != 0)
        {
            if (printed == 4)
            {
                printf("\n");
                printed = 0;
            }

            printf("%10ld", a);
            printed++;
            printedCount++;
        }

        nextTerm = a + b;
        a = b;
        b = nextTerm;
    }
    printf("\n");

    return 0;
}
