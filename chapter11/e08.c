#include <stdio.h>

int *find_largest(int a[], int n);

int main()
{
    int arr[] = {1, 3, 5, 2, 6, 54, 9, 10, 8, 90};
    int n = 10;

    int *larg = find_largest(arr, n);

    printf("largest: %d\n", *larg);

}

int *find_largest(int a[], int n)
{
    int *largest;
    largest = &a[0];
    for(int i = 0 ;i < n ; i++){
        if(a[i] > *largest)
            largest = &a[i];
    }
    return largest;
}