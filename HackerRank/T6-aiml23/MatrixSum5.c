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
    int sum = 0, product = 1;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            sum += matrix[i][j]; //calculating sum of matrix elements
            product *= matrix[i][j]; //calculating product of matrix elements
        }
    }
    printf("%d %d",sum,product); //printing sum and product of matrix elements
    return 0;
}
