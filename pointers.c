#include <stdio.h>

int main(){
    int i, *p;
    i = 5;
    p = &i;

    printf("%d",*p);

    printf("\n%p",&p);


    return 0;
}