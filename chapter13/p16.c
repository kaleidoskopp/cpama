#include <stdio.h>
#include <string.h>

#define LEN 30

void reverse(char *message);

int main()
{
    char phrase[LEN];
    int ch, j;
    int i = 0;
    /*
    while((ch = getchar()) != '\n' && i <= LEN){
        phrase[i] = ch;
        i++;
    }
    */
    fgets(phrase, LEN, stdin);
    reverse(phrase);

    printf("%s", &phrase);

    /*
    int *p;

    for(p = &phrase[i - 1];p >= &phrase[0]; p--){
        putchar(*p);
    }
    */
}

void reverse(char *message)
{
    const int len = strlen(message);
    char *start = message;
    char *end = &message[len-1];
    char tmp;
    for (; start < end; start++, end--)
    {
        tmp = *start;
        *start = *end;
        *end = tmp;
    }
    
}