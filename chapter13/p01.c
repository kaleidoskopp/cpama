/*
Write a program that finds the “smallest” and “largest” in a series of words. After the user
enters the words, the program will determine which words would come first and last if the
words were listed in dictionary order. The program must stop accepting input when the user
enters a four-letter word. Assume that no word is more than 20 letters long. An interactive
session with the program might look like this:
Enter word: dog
Enter word: zebra
Enter word: rabbit
Enter word: catfish
Enter word: walrus
Enter word: cat
Enter word: fish
Smallest word: cat
Largest word: zebra
Hint: Use two strings named smallest_word and largest_word to keep track of the
“smallest” and “largest” words entered so far. Each time the user enters a new word, use
strcmp to compare it with smallest_word; if the new word is “smaller,” use strcpy
to save it in smallest_word. Do a similar comparison with largest_word. Use
strlen to determine when the user has entered a four-letter word.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 20

void get_first_word();
void get_word();
void compare_words();
void print_result();

char smallest_word[MAX+1], largest_word[MAX+1], current_word[MAX+1];

int main(void)
{

    get_first_word();

    while(strlen(current_word) != 4){

        get_word();
        compare_words();

    }

    print_result();
}

void get_first_word()
{
    get_word();
    strcpy(largest_word, current_word);
    strcpy(smallest_word, current_word);
}

void get_word()
{
    printf("Enter word: ");
    scanf("%s",current_word);
}

void compare_words()
{
    if(strcmp(current_word, largest_word) > 0){
        strcpy(largest_word, current_word);
    }
    
    if(strcmp(current_word, smallest_word) < 0){
        strcpy(smallest_word, current_word);
    }
}

void print_result()
{
    printf("Smallest word: %s\n", smallest_word);
    printf("Largest word: %s\n", largest_word);
}