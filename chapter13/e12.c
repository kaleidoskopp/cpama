#include <stdio.h>
#include <string.h>

void get_extension(const char *file_name, char *extension);

int main()
{
    char file_name[50], extension[50];

    printf("Enter filename: ");
    scanf("%s", file_name);
    get_extension(file_name, extension);

    printf("Extension: ");
    for(int i = 0 ; extension[i] != '\0'; i++){
        putchar(extension[i]);
    }
    return 0;
}

void get_extension(const char *file_name, char *extension)
{
    int found_extension = 0;
    for(; *file_name != '\0' ; file_name++){
        if(*file_name == '.'){
            file_name++;
            strcpy(extension, file_name);
        }
    }
}
