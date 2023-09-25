#include <stdio.h>

struct fraction{
    int numerator;
    int denominator;
};

struct fraction reduce_fraction(struct fraction f);
struct fraction add_fraction(struct fraction f1, struct fraction f2);
struct fraction subtract_fraction(struct fraction f1, struct fraction f2);
struct fraction multiply_fraction(struct fraction f1, struct fraction f2);
struct fraction divide_fraction(struct fraction f1, struct fraction f2);
int gcd(int n1, int n2);

int main(void)
{
    printf("GCD: %d\n", gcd(123, 456));

    struct fraction f = {30, 56};

    struct fraction f1 = {40, 7};
    struct fraction f2 = {50, 8};

    f = reduce_fraction(f);

    printf("numerator: %d\ndenominator: %d", f.numerator, f.denominator);

    printf("\n---------ADD------------\n");
    struct fraction f3 = add_fraction(f1, f2);
    printf("numerator: %d\n", f3.numerator);
    printf("denominator: %d\n", f3.denominator);

    printf("\n---------SUBTRACT------------\n");
    f3 = subtract_fraction(f1, f2);
    printf("numerator: %d\n", f3.numerator);
    printf("denominator: %d\n", f3.denominator);

    printf("\n---------MULTIPLY------------\n");
    f3 = multiply_fraction(f1, f2);
    printf("numerator: %d\n", f3.numerator);
    printf("denominator: %d\n", f3.denominator);

    printf("\n---------DIVIDE------------\n");
    f3 = divide_fraction(f1, f2);
    printf("numerator: %d\n", f3.numerator);
    printf("denominator: %d\n", f3.denominator);
    

    return 0;
}

struct fraction add_fraction(struct fraction f1, struct fraction f2)
{
    int denominator = f1.denominator * f2.denominator;
    int numerator1 = f1.numerator * f2.denominator;
    int numerator2 = f1.denominator * f2.numerator;
    struct fraction f = {numerator1 + numerator2, denominator};
    f = reduce_fraction(f);
    return f;
}

struct fraction subtract_fraction(struct fraction f1, struct fraction f2)
{
    int denominator = f1.denominator * f2.denominator;
    int numerator1 = f1.numerator * f2.denominator;
    int numerator2 = f1.denominator * f2.numerator;
    struct fraction f = {numerator1 - numerator2, denominator};
    f = reduce_fraction(f);
    return f;
}

struct fraction multiply_fraction(struct fraction f1, struct fraction f2)
{
    int denominator = f1.denominator * f2.denominator;
    int numerator = f1.numerator * f2.numerator;
    struct fraction f = {numerator, denominator};
    f = reduce_fraction(f);
    return f;
}

struct fraction divide_fraction(struct fraction f1, struct fraction f2)
{
    int denominator = f1.denominator * f2.numerator;
    int numerator = f1.numerator * f2.denominator;
    struct fraction f = {numerator, denominator};
    f = reduce_fraction(f);
    return f;
}

struct fraction reduce_fraction(struct fraction f)
{
    //struct fraction frac;
    int divisor = gcd(f.numerator, f.denominator);
    f.denominator /= divisor;
    f.numerator /= divisor;
    return f;
}

int gcd(int n1, int n2)
{
    //int divisor = 1;
    int smallest = n1 > n2 ? n2 : n1;       // set the smallest number in order to optimize the loop
    if(smallest < 0) smallest *= -1;        // check if fraction is negative, and convert it to positive
    for(int i = smallest / 2; i > 0; i--){  // start by the middle, as it will be faster
        if(n1 % i == 0 && n2 % i == 0){
            return i;
        }
    }
    return 1;
}
