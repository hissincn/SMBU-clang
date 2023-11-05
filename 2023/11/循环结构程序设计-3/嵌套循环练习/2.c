#include <stdio.h>

void countExchangeWays()
{
    int count = 0;
    for (int ten = 1; ten <= 9; ten++)
    {
        for (int five = 1; five <= 18; five++)
        {
            for (int two = 1; two <= 40; two++)
            {
                int one = 40 - (ten + five + two);
                if (one >= 1)
                {
                    int total = ten * 10 + five * 5 + two * 2 + one * 1;
                    if (total == 100)
                    {
                        printf("five=%d ten=%d two=%d,one=%d\n", five, ten, two, one); // i don't why put five ahead of ten, it will be wrong. The teacher may be have 脑血拴 for three years!!!
                        count++;
                    }
                }
            }
        }
    }
    printf("方案个数=%d\n", count);
}

int main()
{
    countExchangeWays();
    return 0;
}
