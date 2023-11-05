#include <stdio.h>

int main()
{
    char teamA[3] = {'a', 'b', 'c'};
    char teamB[3] = {'x', 'y', 'z'};
    char match[3][2]; // 保存比赛名单

    // 三重循环尝试所有可能的比赛组合
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                // 判断是否满足所有条件
                if ((teamA[i] != 'a' || teamB[j] != 'x') &&
                    (teamA[k] != 'c' || teamB[j] != 'x' || teamB[j] != 'z') &&
                    (i != j && j != k && i != k))
                {
                    match[0][0] = teamA[i];
                    match[0][1] = teamB[j];
                    match[1][0] = teamA[j];
                    match[1][1] = teamB[k];
                    match[2][0] = teamA[k];
                    match[2][1] = teamB[i];
                }
            }
        }
    }

    // 输出比赛名单
    printf("比赛的对手是: %c对%c,%c对%c,%c对%c\n", match[2][0], match[2][1], match[1][0], match[1][1], match[0][0], match[0][1]);

    return 0;
}
