#include <stdio.h>


int main(void)
{
    float loan, interest, monthly_payment;
    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    
    printf("Enter interest rate: ");
    scanf("%f", &interest);

    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    loan = loan - monthly_payment + (loan * interest / 100.0 / 12.0);
    printf("Balance remaining after first payment: $%.2f\n", loan);

    loan = loan - monthly_payment + (loan * interest / 100.0 / 12.0);
    printf("Balance remaining after second payment: $%.2f\n", loan);

    loan = loan - monthly_payment + (loan * interest / 100.0 / 12.0);
    printf("Balance remaining after third payment: $%.2f\n", loan);

    return 0;
}