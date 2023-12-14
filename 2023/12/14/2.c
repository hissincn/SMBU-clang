#include <stdio.h>

void rank(char *arr[])
{
    //对arr进行首字母排序
    char *temp;
    for (int i = 0; i < 4; i++)
    {
        for (int j = i; j < 4; j++)
        {
            if (arr[i][0] > arr[j][0])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int main()
{
    char *arr[4] = {"Matlab", "Python", "C_language", "VBasic"};
    rank(arr);
    for (int i = 0; i < 4; i++)
    {
        printf("%s\n", arr[i]);
    }

    return 0;
}