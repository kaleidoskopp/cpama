#include <stdio.h>
#include <stdbool.h>

#define NUM 10

bool search(const int a[], int n, int key);

int main()
{
    int arr[NUM] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p_a = arr;
    int key = 8;

    bool found = search(arr, NUM, key);

    printf("Found: %s", found?"true":"false");

}

bool search(const int a[], int n, int key)
{
    int *p;

    for (p = a; p < a + n; p++){
        if(*p == key)
            return true;
    }

    return false;
}