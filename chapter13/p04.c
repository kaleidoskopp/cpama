#include <stdio.h>

void reverse(int argc, char *argv[], char *reversed[]);

int main(int argc, char *argv[])
{
    char *reversed[argc];
    reverse(argc, argv, reversed);
}

void reverse(int argc, char *argv[], char *reversed[])
{
    printf("argc: %d, argv: \n", argc);
    for(int i = argc - 1; i > 0; i--){
        //fputs(argv[i], stdout);
        printf("%s ", argv[i]);
    }
}