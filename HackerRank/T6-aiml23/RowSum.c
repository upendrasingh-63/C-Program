#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n); //taking input of dimensions of matrix
    int matrix[m][n]; //declaring a 2D array of size m x n
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]); //taking input of matrix elements
        }
    }
    for (int i = 0; i < m; i++) {
        int row_sum = 0; //initializing the sum of the current row to 0
        for (int j = 0; j < n; j++) {
            row_sum += matrix[i][j]; //calculating the sum of elements of the current row
        }
        printf("%d ", row_sum); //printing the sum of elements of the current row
    }
    return 0;
}
