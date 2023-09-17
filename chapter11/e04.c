#include <stdio.h>

void swap(int *p, int *q);

int main()
{
    int p = 5;
    int q = 10;

    swap(&p,&q);

    printf("p: %d  q: %d",p,q);
}

void swap(int *p, int *q)
{
    int tmp;
    
    tmp = *p;
    *p = *q;
    *q = tmp;
}
