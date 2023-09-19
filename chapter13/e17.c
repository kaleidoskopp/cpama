#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

bool test_extension(const char *file_name, const char *extension);

int main()
{
    
    printf("%d", test_extension("hello.exe", "EXE"));
    return 0;
}

bool test_extension(const char *file_name, const char *extension)
{
    bool different = false;
    bool found = false;

    while(*file_name){

        if(*file_name == '.' || found){

            if(!found) *file_name++;    //move pointer to just after the point

            found = true;
            if(toupper(*file_name) != toupper(*extension)){
                printf("%c, %c", toupper(*file_name), toupper(*extension));
                different = true;
                break;                                                      //no point of continuing
            }
            *extension++;       //move the extension pointer too
        }
        file_name++;            //move file name pointer
    }
    if(toupper(*(file_name)) != toupper(*(extension++)))        //check the following character in case the difference is that the extension is longer that in the file_name
        different = true;

    return different?false:true;
}