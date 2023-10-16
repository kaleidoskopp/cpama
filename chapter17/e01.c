#include <stdio.h>
#include <stdlib.h>

void * my_malloc(int bytes);

int main(void)
{
    int *p = my_malloc(sizeof(int));
    return 0;
}

void *my_malloc(int bytes)
{
    void *ptr = malloc(bytes);
    if(ptr == NULL){
        printf("Not enough memory, exiting program.\n");
        exit(EXIT_FAILURE);
    }
    return ptr;
}