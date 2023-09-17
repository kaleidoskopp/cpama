#include <stdio.h>

#define NUM 10

int *find_largest(int a[], int n);

int main()
{
    int arr[NUM] = {0, 1, 2, 33, 4, 5, 6, 7, 8, 9};
    int *largest = find_largest(arr, NUM);

    printf("Largest: %d", *largest);

}



int *find_largest(int a[], int n)
{
    int *ptr_a, *largest;
    for(ptr_a = a, largest = a; ptr_a < a + n; ptr_a++){
        if(*ptr_a > *largest){
            largest = ptr_a;
        }
    }
    return largest;
}