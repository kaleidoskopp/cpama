#include <stdio.h>
#include <limits.h>

#define NUM 10

void find_two_largest(int a[], int n, int *largest, int *second_largest);

int main()
{
    int a[NUM] = {0,45,2,39,4,5,6,7,8,9};
    int largest, second_largest;

    find_two_largest(a, NUM, &largest, &second_largest);

    printf("largest: %d\nsecond largest: %d",largest, second_largest);
}

void find_two_largest(int a[], int n, int *largest, int *second_largest)
{
    int i;

    /*  Works, but it uses two loops. Not optimal
    *largest = *second_largest = INT_MIN;

    //largest
    for(i = 0; i < n; i++){
        if(a[i] > *largest)
            *largest = a[i];
    }

    //second largest
    for(i = 0; i < n; i++){
        if(a[i] > *second_largest && a[i] != *largest)
            *second_largest = a[i];
    }
    */

    // Better way that incorporates both in a single loop
    *largest = *second_largest = INT_MIN;
    for(i = 0; i < n; i++){
        if(a[i] > *largest){
            *largest = a[i];
        }
        else if(a[i] > *second_largest && a[i] < *largest)
            *second_largest = a[i];
    }
}
