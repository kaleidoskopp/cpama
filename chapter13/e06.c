#include <stdio.h>
#include <ctype.h>
#include <string.h>

void censor(char str[]);

int main()
{
    char str[] = "food fool";
    censor(str);
    printf("%s", str);
    printf("\n%d", strcmp("abc", "def"));
    return 0;
}

//b
void censor(char str[])
{
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == 'f' && str[i+1] == 'o' && str[i+2] == 'o'){
            str[i] = str[i+1] = str[i+2] = 'x';
        }
    }
}
