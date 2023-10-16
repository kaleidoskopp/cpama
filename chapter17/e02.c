#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *duplicate(char *str);

int main(void)
{
    char *p;
    p = duplicate("Hello my friends!");
    printf("%s", p);
    return 0;
}

char *duplicate(char *str)
{
    char *dup = malloc(strlen(str)+1);
    if(dup == NULL){
        return NULL;
    }
    strcpy(dup, str);
    return dup;
}
