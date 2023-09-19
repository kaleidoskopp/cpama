#include <stdio.h>

#define MAX 50

int count_spaces(const char *s);

int main()
{
    char str[MAX];
    printf("Enter a phrase: ");
    fgets(str, MAX, stdin);

    puts(str);
    printf("%d", count_spaces(str));
    return 0;
}

int count_spaces(const char *s)
{
    int count = 0;
    while (*s)
        if (*s++ == ' ')
            count++;
    return count;
}