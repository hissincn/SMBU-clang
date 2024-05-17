#include <stdio.h>
#include <stdlib.h>

struct profile
{
    char name[100];
    int birth_year;
};

int main()
{
    int test_case;
    scanf("%d", &test_case);

    struct profile **peoples = (struct profile **)malloc(sizeof(struct profile *) * test_case);
    int *people_counts = (int *)malloc(sizeof(int) * test_case);

    for (int i = 0; i < test_case; i++)
    {
        int people_case;
        scanf("%d", &people_case);

        peoples[i] = (struct profile *)malloc(sizeof(struct profile) * people_case);
        people_counts[i] = people_case;

        for (int j = 0; j < people_case; j++)
        {
            scanf("%s %d", peoples[i][j].name, &peoples[i][j].birth_year);
        }

        for (int j = 0; j < people_case; j++)
        {
            for (int k = j + 1; k < people_case; k++)
            {
                if (peoples[i][j].birth_year < peoples[i][k].birth_year)
                {
                    struct profile temp = peoples[i][j];
                    peoples[i][j] = peoples[i][k];
                    peoples[i][k] = temp;
                }
            }
        }
    }

    // 输出每个测试用例的人名
    for (int i = 0; i < test_case; i++)
    {
        // peoples[i]的长度
        int len = people_counts[i];
        for (int j = 0; j < len; j++)
        {
            printf("%s\n", peoples[i][j].name);
        }
    }

    // 释放内存
    for (int i = 0; i < test_case; i++)
    {
        free(peoples[i]);
    }
    free(peoples);

    return 0;
}
