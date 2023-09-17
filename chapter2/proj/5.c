#include <stdio.h>

int powr(int num, int power);

int main(void)
{
    int val;
    printf("Enter a value: ");
    scanf("%d", &val);

    printf("result: %d",3*powr(val, 5) + 2 * powr(val, 4) - 5 * powr(val, 3) - powr(val,2) + 7 * val - 6);

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
