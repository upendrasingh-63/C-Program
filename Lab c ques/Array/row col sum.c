#include <stdio.h>

int main() {
  int rows, cols, i, j;
  printf("Enter the number of rows and columns of the array: ");
  scanf("%d %d", &rows, &cols);

  int arr[rows][cols];

  printf("Enter the elements of the array:\n");

  // Input elements of the array
  for(i = 0; i < rows; i++) {
    for(j = 0; j < cols; j++) {
      scanf("%d", &arr[i][j]);
    }
  }

  // Calculate row sums
  printf("Row sums:\n");
  for(i = 0; i < rows; i++) {
    int row_sum = 0;
    for(j = 0; j < cols; j++) {
      row_sum += arr[i][j];
    }
    printf("%d ", row_sum);
  }

  // Calculate column sums
  printf("\nColumn sums:\n");
  for(j = 0; j < cols; j++) {
    int col_sum = 0;
    for(i = 0; i < rows; i++) {
      col_sum += arr[i][j];
    }
    printf("%d ", col_sum);
  }

  return 0;
}
