#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main(void)
{
    int amount, twenties, tens, fives, ones;
    //twenties = tens = fives = ones = 0;
    printf("Enter a dollar amount: ");
    scanf("%d",&amount);
    printf("done\n");

    pay_amount(amount, &twenties, &tens, &fives, &ones);
    /*
    twenties = amount / 20;
    current_amount = amount - twenties*20;

    tens = current_amount / 10;
    current_amount = current_amount - tens*10;

    fives = current_amount / 5;
    current_amount = current_amount - fives*5;

    ones = current_amount / 1;
    current_amount = current_amount - ones*1;
    */

    printf("$20 dollar bills: %d\n", twenties);
    printf("$10 dollar bills: %d\n", tens);
    printf("$5 dollar bills: %d\n", fives);
    printf("$1 dollar bills: %d\n", ones);
    return 0;
}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones)
{
    *twenties = dollars / 20;
    dollars = dollars - *twenties * 20;

    *tens = dollars / 10;
    dollars = dollars - *tens * 10;

    *fives = dollars / 5;
    dollars = dollars - *fives * 5;

    *ones = dollars;
}
