#include <stdio.h>

#define STR_LEN 80
#define SENT_LEN 10

int read_line(char str[], int n);

int main(void)
{
    char *p = "abc";
    puts(*p);
    return 0;
}

int read_line(char str[], int n)
{
    int ch, i = 0;
    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;
    str[i] = '\0'; /* terminates string */
    return i;      /* number of characters stored */
}
