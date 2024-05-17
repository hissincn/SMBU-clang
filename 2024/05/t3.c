#include <stdio.h>
#include <stdlib.h>

void sort(int a[], int n);
int find(int a[], int n, int value);
void display(int a[], int n);
void reverse(int a[], int n);
void handle_test_case(int a[], int n, int value);

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; ++i)
    {
        int a[10];
        for (int j = 0; j < 10; ++j)
        {
            scanf("%d", &a[j]);
        }
        int value;
        scanf("%d", &value);

        handle_test_case(a, 10, value);
    }
    return 0;
}

void sort(int a[], int n)
{
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int find(int a[], int n, int value)
{
    for (int i = 0; i < n; ++i)
    {
        if (a[i] == value)
        {
            return i;
        }
    }
    return -1;
}

void display(int a[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        printf("%d", a[i]);
        if (i != n - 1)
        {
            printf(" ");
        }
    }
    printf("\n");
}

void reverse(int a[], int n)
{
    for (int i = 0; i < n / 2; ++i)
    {
        int temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }
}

void handle_test_case(int a[], int n, int value)
{
    int index = find(a, n, value);
    if (value % 2 != 0 && index != -1)
    {
        for (int i = index; i < n - 1; ++i)
        {
            a[i] = a[i + 1];
        }
        n -= 1;
        sort(a, n);
        display(a, n);
    }
    else if (value % 2 == 0 && index == -1)
    {
        a[n] = value;
        n += 1;
        sort(a, n);
        reverse(a, n);
        display(a, n);
    }
    else
    {
        int odd[10], even[10];
        int odd_count = 0, even_count = 0;
        for (int i = 0; i < n; ++i)
        {
            if (a[i] % 2 != 0)
            {
                odd[odd_count++] = a[i];
            }
            else
            {
                even[even_count++] = a[i];
            }
        }
        sort(odd, odd_count);
        sort(even, even_count);
        reverse(odd, odd_count);
        reverse(even, even_count);

        for (int i = 0; i < odd_count; ++i)
        {
            a[i] = odd[i];
        }
        for (int i = 0; i < even_count; ++i)
        {
            a[odd_count + i] = even[i];
        }
        display(a, n);
    }
}