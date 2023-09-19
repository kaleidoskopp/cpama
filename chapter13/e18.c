#include <stdio.h>

void remove_filename(char *url);

int main()
{
    char str[] = "http://www.knking.com/index.html";
    remove_filename(str);
    puts(str);
    return 0;
}

void remove_filename(char *url)
{
    int slashes = 0;
    char *p = url;
    while(*p)                         //Count the slashes
    {
        if(*p++ == '/') slashes++;
    }

    while(*url)                         //work on the real string
    {
        if(*url == '/') slashes--;      //decrement slashes

        if(slashes <= 0){               //until the last one, and then assign null to it
            *url = '\0';
            return;
        }

        *url++;
    }

}