#include <stdio.h>


int main(void)
{
    int amount, current_amount, bill20, bill10, bill5, bill1;
    printf("Enter a dollar amount: ");
    scanf("%d",&amount);

    
    bill20 = amount / 20;
    current_amount = amount - bill20*20;

    bill10 = current_amount / 10;
    current_amount = current_amount - bill10*10;

    bill5 = current_amount / 5;
    current_amount = current_amount - bill5*5;

    bill1 = current_amount / 1;
    current_amount = current_amount - bill1*1;

    printf("$20 dollar bills: %d\n", bill20);
    printf("$10 dollar bills: %d\n", bill10);
    printf("$5 dollar bills: %d\n", bill5);
    printf("$1 dollar bills: %d\n", bill1);
    return 0;
}