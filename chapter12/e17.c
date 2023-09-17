#include <stdio.h>
#include <stdbool.h>

#define LEN 3

int sum_two_dimensional_array(const int a[][LEN], int n);

int main()
{

    int arr[3][3] = {{2, 2, 2}, {2, 2, 2}, {2, 2, 2}};

    int sum = sum_two_dimensional_array(arr, 3);

    printf("Sum: %d", sum);
}

int sum_two_dimensional_array(const int a[][LEN], int n)
{
    int sum = 0;
    int *ptr;

    for (ptr = &a[0][0]; ptr < &a[0][0] + n * LEN; ptr++)
    {
        sum += *ptr;
    }

    return sum;
}

