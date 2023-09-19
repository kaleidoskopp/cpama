#include <stdio.h>
#include <string.h>

int read_line(char str[], int n);

int main(void)
{
    char str[8];

    int chars = read_line(str, 8);

    printf("chars: %d\n", chars);

    for(int i = 0; i < chars; i++){
        putchar(str[i]);
    }

    return 0;
}

//a (skip white space before beginning to input characters)
/*
int read_line(char str[], int n)
{
    int ch, i = 0;
    while ((ch = getchar()) != '\n'){
        if(i == 0 && ch == ' ') continue; // check if the first is space
        if (i < n)
            str[i++] = ch;
    }
    str[i] = '\0'; // terminates string
    return i;      // number of characters stored
}
*/

//b (stop reading at the first white space character)
/*
int read_line(char str[], int n)
{
    int ch, i = 0;
    while ((ch = getchar()) != '\n' && ch != ' '){ // Added comparison
        if (i < n)
            str[i++] = ch;
    }
    str[i] = '\0'; // terminates string
    return i;      // number of characters stored
}
*/

//c (Have it stop reading at the first new-line character, then store the new-line character in the string)
/*
int read_line(char str[], int n)
{
    int ch, i = 0;
    while ((ch = getchar()) != '\n'){
        if (i < n)
            str[i++] = ch;
    }
    str[i++] = '\n'; // terminates string
    str[i] = '\0';
    return i;      // number of characters stored
}
*/


//d (Have it leave behind characters that it doesn’t have room to store.)
int read_line(char str[], int n)
{
    int ch, i = 0;
    while ((ch = getchar()) != '\n'){
        if (i < n)
            str[i++] = ch;
    }
    str[i] = '\0'; // terminates string
    return i;      // number of characters stored
}
