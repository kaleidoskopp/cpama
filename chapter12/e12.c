#include <stdio.h>

#define NUM 10

int *find_largest(int a[], int n);
void find_two_largest(const int *a, int n, int *largest, int *second_largest);

int main()
{
    int arr[NUM] = {0, 100, 29, 33, 4, 5, 6, 7, 8, 99};
    int largest, second_largest;

    find_two_largest(arr, NUM, &largest, &second_largest);

    printf("Largest: %d,  Second largest: %d\n", largest, second_largest);

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

void find_two_largest(const int *a, int n, int *largest, int *second_largest)
{
    int *ptr_a = a;
    *largest = *ptr_a;
    *second_largest = *ptr_a;
    for(; ptr_a < a + n; ptr_a++){
        if(*ptr_a > *largest){
            *second_largest = *largest;
            *largest = *ptr_a;
        }else if(*ptr_a > *second_largest && *ptr_a < *largest){
            *second_largest = *ptr_a;
        }
    }
}
