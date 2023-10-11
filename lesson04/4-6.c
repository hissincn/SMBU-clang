#include <stdio.h>

int main()
{
    int age;
    scanf("%d", &age);

    if (age >= 1 && age <= 17)
    {
        printf("你属于儿童\n");
    }
    else if (age >= 18 && age <= 44)
    {
        printf("你属于青年\n");
    }
    else if (age >= 45 && age <= 59)
    {
        printf("你属于中年\n");
    }
    else if (age >= 60 && age <= 69)
    {
        printf("你属于老年\n");
    }
    else if (age >= 70 && age <= 79)
    {
        printf("你属于古稀之年\n");
    }
    else
    {
        printf("你属于耄耋老人\n");
    }

    return 0;
}