#include <stdio.h>

int main(void)
{
    float amount;
    printf("Enter an amount: ");
    scanf("%f", &amount);
    printf("Amount with taxes: $%.2f", amount * 1.05f);

    return 0;
}
