#include <stdio.h>

#define LEN 30

int main()
{
    int phrase[LEN];
    int ch, j;
    int i = 0;
    while((ch = getchar()) != '\n' && i <= LEN){
        //putchar(ch);
        phrase[i] = ch;
        i++;
    }

    for(j = i-1; j >= 0; j--){
        putchar(phrase[j]);
    }
}