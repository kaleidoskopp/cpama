#include <stdio.h>

#define NUM 10

int sum_array(const int a[], int n);

int main()
{
    int sum;
    int arr[NUM] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p_a = arr;

    sum = sum_array(p_a, NUM);

    printf("Sum: %d", sum);

}

/*
int sum_array(const int a[], int n)
{
    int i, sum;
    
    sum = 0;
    for(i = 0; i < n, i++)
        sum += a[i];
    return sum;
}
*/
int sum_array(const int a[], int n)
{
    int *p, sum;
    sum = 0;

    for(p = a; p < a + n; p++){
        sum += *p;
    }
    return sum;
}
