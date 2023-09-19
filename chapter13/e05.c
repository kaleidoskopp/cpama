#include <stdio.h>
#include <ctype.h>

void capitalize(char str[]);

int main()
{
    char str[] = "Hello5";
    capitalize(str);
    printf("%s", str);
    return 0;
}


//a
/*
void capitalize(char str[])
{
    for (int i = 0; str[i] != '\0'; i++){
        str[i] = toupper(str[i]);
    }
}
*/

//b
void capitalize(char str[])
{
    for(;*str != '\0';){
        *str++ = toupper(*str);
    }
}
