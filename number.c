#include <stdio.h>
#include <stdbool.h>

const bool parts[10][7] = {
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

int main()
{
    int number = 5;
    for (int i = 0; i < 3; i++){
        if (i == 0){
            printf(" ");
            if(parts[number][0]){
                printf("_");
            }
            else{
                printf(" ");
            }
            printf(" \n");
        }
        if (i == 1){
            if (parts[number][5]){
                printf("|");
            }else{
                printf(" ");
            }

            if(parts[number][6]){
                printf("_");
            }else{
                printf(" ");
            }

            if(parts[number][1]){
                printf("|\n");
            }else{
                printf(" \n");
            }
        }
        if (i == 2){
            if (parts[number][4]){
                printf("|");
            }else{
                printf(" ");
            }

            if(parts[number][3]){
                printf("_");
            }else{
                printf(" ");
            }

            if(parts[number][2]){
                printf("|\n");
            }else{
                printf(" \n");
            }
        }
        
    }
    return 0;
}
