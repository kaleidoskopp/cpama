#include <stdio.h>

#define LEN 30

int main()
{
    int phrase[LEN];
    int ch, j, *p;
    int i = 0;
    p = phrase;
    while((ch = getchar()) != '\n' && p <= &phrase[LEN - 1]){
        *p = ch;
        p++;
    }
    //printf("%c", phrase[2]);
    for(--p;p >= phrase; p--){
        putchar(*p);
    }
}