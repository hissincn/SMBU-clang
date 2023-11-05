#include <stdio.h>
#include <math.h>

int isPrime(int num)
{
    if (num <= 1)
    {
        return 0;
    }
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int sum = 0;
    int count = 0;

    for (int i = 1; i <= 100; i++)
    {
        if (isPrime(i))
        {
            if (i == 2) // for adapt the fucking answer.
            {
                printf(" %d", i);
            }
            else
            {
                printf("%4d", i); // that is enough
            }
            sum += i;
            count++;
        }
    }

    printf("\n个数=%d,和=%d\n", count, sum);

    return 0;
}
