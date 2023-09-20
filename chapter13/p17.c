#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

#define LEN 100

bool is_palindrome(const char *message);

int main()
{
    char phrase[LEN];
    int diff = 0;
    int ch, i, j;
    char *p, *p_back;
    
    printf("Enter a message: ");
    for(p = &phrase[0]; (ch = getchar()) != '\n' && p < &phrase[LEN-1]; p++){
        //putchar(ch);
        if(isalpha(ch)){
            *p = ch;
        }else{
            --p;
        }
        
    }

    is_palindrome(phrase);

}

bool is_palindrome(const char *message)
{
    const char *p, *p_back;
    bool diff = false;
    p = message;
    p_back = message;
    while(*p_back) p_back++;
    p_back--;                          //Set p_back to the last character ignoring \0
    for(;p_back >= p; p++, p_back--){
        if(tolower(*p) != tolower(*p_back)){
            diff = true;
            break;
        }
    }

    printf("\n");
    if(diff)
        printf("Not a palindrome");
    else
        printf("Palindrome");
}
