#include <stdio.h>

#define LEN 30

int main()
{
    int phrase[LEN];
    int ch, j;
    int i = 0;
    while((ch = getchar()) != '\n' && i <= LEN){
        phrase[i] = ch;
        i++;
    }

    int *p;

    for(p = &phrase[i - 1];p >= &phrase[0]; p--){
        putchar(*p);
    }
}