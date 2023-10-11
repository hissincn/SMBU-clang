#include <stdio.h>
int main()
{
    int grade;
    scanf("%d", &grade);
    if (grade >= 90)
    {
        printf("A\n");
    }
    else if (grade >= 80)
    {
        printf("B\n");
    }
    else if (grade >= 60)
    {
        printf("C\n");
    }
    else
    {
        printf("D\n");
    }
}