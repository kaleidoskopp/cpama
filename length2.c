/* Determines the length of a message */
#include <stdio.h>
int main(void)
{
    int asd;
    printf("%d\n",sizeof(asd));
    int len = 0;
    printf("Enter a message: ");
    char ch;
    while (ch = getchar() != '\n'){
        len++;
        putchar(ch);
    }
    printf("\nYour message was %d character(s) long.\n", len);
    return 0;
}