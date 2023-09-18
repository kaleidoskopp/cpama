#include <stdio.h>
#include <ctype.h>

#define LEN 100

int main()
{
    int phrase[LEN];
    int diff = 0;
    int ch, i, j;
    int *p, *p_back;
    
    printf("Enter a message: ");
    for(p = phrase; (ch = getchar()) != '\n' && p < &phrase[LEN-1]; p++){
        //putchar(ch);
        if(isalpha(ch)){
            *p = ch;
        }else{
            --p;
        }
        
    }


    //printf("\ni: %d\n", i);
    for(--p, p_back = phrase;p >= &phrase[0]; p--, p_back++){
        //putchar(phrase[i]);
        if(tolower(*p) != tolower(*p_back)){
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
