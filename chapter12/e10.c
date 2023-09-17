#include <stdio.h>

#define NUM 10

int *find_middle(int a[], int n);

int main()
{
    int arr[NUM] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *middle = find_middle(arr, NUM);

    printf("Middle: %d", *middle);

}



int *find_middle(int a[], int n)
{
    return a + n/2;
}