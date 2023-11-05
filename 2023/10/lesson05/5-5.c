#include <stdio.h>

int main()
{
    int num;
    int flag = 0;
    scanf("%d", &num);
    printf("%d = ", num);

    for (int i = 2; i <= num;)
    {
        if (num % i == 0)
        {
            if (flag == 1)
            {
                printf("*");
            }
            printf("%d", i);
            num = num / i;
            flag = 1;
        }
        else
        {
            i++;
        }
    }

    printf("\n");
    return 0;
}