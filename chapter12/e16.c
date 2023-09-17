#include <stdio.h>
#include <stdbool.h>

int *find_largest(int a[], int n);

int main()
{
    int temperatures[7][24] = {{ 12, 34, 21, 31, 25, 36, 78, 43, 21, 56,
                                 12, 34, 21, 31, 25, 36, 78, 79, 21, 56,
                                 13, 52, 1, 3 },
                               { 12, 34, 81, 31, 25, 36, 78, 43, 21, 56,
                                 12, 34, 21, 31, 25, 36, 78, 43, 21, 56,
                                 13, 52, 1, 3 },
                               { 12, 34, 21, 31, 25, 36, 78, 43, 21, 56,
                                 12, 34, 21, 31, 25, 36, 78, 43, 21, 56,
                                 13, 52, 1, 3 },
                               { 12, 34, 21, 31, 25, 36, 78, 43, 21, 56,
                                 12, 34, 21, 31, 32, 36, 78, 43, 21, 56,
                                 13, 52, 1, 3 },
                               { 12, 34, 21, 31, 25, 36, 78, 43, 21, 56,
                                 12, 34, 21, 31, 82, 36, 78, 43, 21, 56,
                                 13, 52, 1, 3 },
                               { 12, 34, 21, 31, 25, 36, 78, 43, 21, 56,
                                 12, 34, 21, 31, 25, 36, 78, 43, 21, 56,
                                 13, 52, 1, 3 },
                               { 12, 34, 21, 31, 25, 36, 78, 43, 21, 56,
                                 12, 34, 21, 31, 25, 36, 78, 43, 21, 56,
                                 13, 52, 1, 3 }};

    int highest = temperatures[0][0];
    int *p_temp, pos;
    p_temp = &temperatures[0][0];

    for(int i = 0; i < 7; i++){
      p_temp = find_largest(&temperatures[i][0], 24);
      printf("Highest (day %d): %d\n",i, *p_temp);
    }

}

int *find_largest(int a[], int n)
{
    int *ptr_a, *largest;
    for(ptr_a = a, largest = a; ptr_a < a + n; ptr_a++){
        if(*ptr_a > *largest){
            largest = ptr_a;
        }
    }
    return largest;
}
