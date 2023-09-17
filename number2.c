#include <stdio.h>
#include <stdbool.h>

#define NUM 7
#define MAX_DIGITS 10
#define DIGIT_HEIGHT 4

void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

const bool segments[10][7] = {
    {1, 1, 1, 1, 1, 1, 0}, // 0
    {0, 1, 1, 0, 0, 0, 0}, // 1
    {1, 1, 0, 1, 1, 0, 1}, // 2
    {1, 1, 1, 1, 0, 0, 1}, // 3
    {0, 1, 1, 0, 0, 1, 1}, // 4
    {1, 0, 1, 1, 0, 1, 1}, // 5
    {1, 0, 1, 1, 1, 1, 1}, // 6
    {1, 1, 1, 0, 0, 0, 0}, // 7
    {1, 1, 1, 1, 1, 1, 1}, // 8
    {1, 1, 1, 1, 0, 1, 1}  // 9
};

char digits[DIGIT_HEIGHT][MAX_DIGITS * 4];

int main()
{
    int numbers[NUM] = {};
    int c;
    int position = 0;

    printf("Insert a seven digit number: ");
    while ((c = getchar()) != '\n'){
        if(c >= '0' && c <= '9'){
            numbers[position++] = c - '0';
        }
        if(position >= NUM) break;
    }
    clear_digits_array();
    for(int i = 0 ; i < NUM ; i++){
        process_digit(numbers[i],i);
    }
    print_digits_array();
    return 0;
}

void clear_digits_array(void)
{
    for(int i = 0; i < DIGIT_HEIGHT; i++){
        for(int j = 0; j < MAX_DIGITS * 4; j++){
            digits[i][j] = ' ';
        }
    }
}

void process_digit(int digit, int position)
{
    int offset = position * 4;
    digits[0][offset + 1] = segments[digit][0] ? '_' : ' ';
    digits[1][offset]     = segments[digit][5] ? '|' : ' ';
    digits[1][offset + 1] = segments[digit][6] ? '_' : ' ';
    digits[1][offset + 2] = segments[digit][1] ? '|' : ' ';
    digits[2][offset]     = segments[digit][4] ? '|' : ' ';
    digits[2][offset + 1] = segments[digit][3] ? '_' : ' ';
    digits[2][offset + 2] = segments[digit][2] ? '|' : ' ';
}

void print_digits_array(void){
    for(int i = 0; i < DIGIT_HEIGHT; i++){
        for(int j = 0; j < NUM*4; j++){
            printf("%c",digits[i][j]);
        }
        printf("\n");
    }
}
