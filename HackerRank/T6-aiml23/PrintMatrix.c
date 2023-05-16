#include<stdio.h>

int main() {
    int m, n;
    scanf("%d %d",&m,&n); //taking input of dimensions of matrix
    int matrix[m][n]; //declaring a 2D array of size m x n
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d",&matrix[i][j]); //taking input of matrix elements
        }
    }
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ",matrix[i][j]); //printing matrix elements in matrix form
        }
        printf("\n"); //printing new line after each row
    }
    return 0;
}
