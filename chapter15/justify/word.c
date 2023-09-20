#include <stdio.h>
#include "word.h"

int read_char(void)
{
    int ch = getchar();

    if (ch == '\n' || ch == '\t')
        return ' ';
    return ch;
}

void read_word(char *word, int len)
{
    int ch, pos = 0;

    while ((ch = read_char()) == ' ')   //skips over spaces
        ;
    while (ch != ' ' && ch != EOF)      //reads characters until there's a blank or it's EOF
    {
        if (pos < len)
            word[pos++] = ch;           //stores characters in word until reaching the len limit
        ch = read_char();
    }
    word[pos] = '\0';
}