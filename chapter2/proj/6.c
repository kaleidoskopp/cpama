#include <stdio.h>

int powr(int num, int power);

int main(void)
{
    int val;
    printf("Enter a value: ");
    scanf("%d", &val);

    printf("result: %d",((((3*val + 2)*val-5)*val-1)*val+7)*val-6);

    return 0;
}

int powr(int num, int power)
{
    int res = 1.0f;
    for(int i = 0 ; i < power ; i++){
        res = num*res;
    }
    return res;
}
