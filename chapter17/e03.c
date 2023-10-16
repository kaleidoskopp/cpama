#include <stdio.h>
#include <stdlib.h>

int *create_array(int n, int initial_value);

int main(void)
{

    return 0;
}

/*  V1
int *create_array(int n, int initial_value)
{
    int arr[n];
    if (arr == NULL){
        return NULL;
    }
    for(int i = 0; i < n; i++){
        arr[i] = initial_value;
    }
    return arr;
}
*/

int *create_array(int n, int initial_value)
{
    int *p1, *p2;
    p1 = malloc(sizeof(int) * n);
    if(p1 == NULL){
        return NULL;
    }

    for(p2 = p1; p2 < p1 + n; p2++){
        *p2 = initial_value;
    }
}
