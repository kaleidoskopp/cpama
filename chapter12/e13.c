#include <stdio.h>

#define N 10

void show_matrix(int n, double a[n][n]);

int main()
{
    double ident[N][N];
    int row, col;

    double *ptr_a;
    int count = N+1;
    for(ptr_a = &ident[0][0]; ptr_a <= &ident[N-1][N-1]; ptr_a++){
        if(count == N + 1){
            count = 0;
            *ptr_a = 1;
        }else{
            *ptr_a = 0;
        }
        count++;
    }

/*
    for (row = 0; row < N; row++)
        for (col = 0; col < N; col++)
            if (row == col)
                ident[row][col] = 1.0;
            else
                ident[row][col] = 0.0;
*/

    show_matrix(N, ident);
}

void show_matrix(int n, double a[n][n])
{
    int i , j;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("%.0f ", a[i][j]);
        }
        printf("\n");
    }
}
