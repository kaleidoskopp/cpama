#include <stdio.h>

void add_one(int* num);

int main(void)
{
    int num = 5;
    add_one(num);
    printf("%d",num);
    return 0;
}

void add_one(int* num)
{
    num++;
}
