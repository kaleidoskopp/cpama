#include <stdio.h>

#define NUM 10

double inner_product(const double *a, const double *b, int n);

int main()
{
    double a[NUM] = {1,2,3,4,5,6,7,8,9,10};
    double b[NUM] = {11,12,13,14,15,16,17,18,19,20};

    int product = inner_product(a, b, NUM);

    printf("%d", product);


}

double inner_product(const double *a, const double *b, int n)
{
    double *pa, *pb, product;
    product = 0;

    for(pa = a, pb = b; pa < a + n; pa++, pb++){
        product += (*pa * *pb);
    }

    return product;
}
