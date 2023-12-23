#include <stdio.h>

int main()
{
    // Array of pointers to strings
    char *p[5] = {"man", "woman", "girl", "boy", "sister"};

    // Pointer to a pointer
    char **pp;

    // Initialize pp to point to the first element of the array
    pp = p;

    // Loop through the array using the pointer to a pointer
    for (int i = 0; i < 5; i++)
    {
        printf("%s\n", *(pp + i));
    }

    return 0;
}
