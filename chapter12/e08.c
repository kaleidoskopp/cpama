#include <stdio.h>

#define NUM 10

void show_array(int a[], int n);
void store_zeros(int a[], int n);

int main()
{
    int arr[NUM] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p = arr;

    show_array(arr, NUM);

    store_zeros(arr, NUM);

    show_array(arr, NUM);
    // printf("Found: %s", found?"true":"false");
}

void store_zeros(int a[], int n)
{
    int *p;
    for (p = a; p < a + n; p++)
        *p = 0;
}

void show_array(int a[], int n)
{
    for (int i = 0 ; i < n ; i++){
        printf("%d, ", a[i]);
    }
    printf("\n");
}
