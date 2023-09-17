#include <stdio.h>
#include <ctype.h>

#define LEN 100

int main()
{
    int phrase[LEN];
    int diff = 0;
    int ch, i, j;
    printf("Enter a message: ");
    for(i = 0; (ch = getchar()) != '\n' && i < LEN; i++){
        //putchar(ch);
        if(isalpha(ch)){
            phrase[i] = ch;
        }else{
            --i;
        }
        
    }
    //printf("\ni: %d\n", i);
    for(--i, j = 0;i >= 0; i--, j++){
        putchar(phrase[i]);
        if(tolower(phrase[i]) != tolower(phrase[j])){
            diff = 1;
            break;
        }
    }

    printf("\n");
    if(diff)
        printf("Not a palindrome");
    else
        printf("Palindrome");

}
