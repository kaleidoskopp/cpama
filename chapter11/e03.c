#include <stdio.h>

void avg_sum(double a[], int n, double *avg, double *sum);

int main()
{
    double a[] = {4, 5, 6};
    int n = 3;
    double avg, sum;
    avg_sum(a, n, &avg, &sum);
    printf("Average: %.2f   Sum: %.2f",avg, sum);
}



void avg_sum(double a[], int n, double *avg, double *sum)
{
    int i;
    *sum = 0.0;
    for (i = 0; i < n; i++)
        *sum += a[i];
    *avg = *sum / n;
}