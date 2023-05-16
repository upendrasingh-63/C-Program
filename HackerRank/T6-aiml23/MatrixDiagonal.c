#include <stdio.h>

int main() {
  int m, n, i, j;
  scanf("%d %d", &m, &n);
  
  if (m != n) {
    printf("Not square matrix.\n");
    return 0;
  }
  
  int matrix[m][n];
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      scanf("%d", &matrix[i][j]);
    }
  }
  
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      if (i == j) {
        printf("%d ", matrix[i][j]);
      }
      
      else {
        printf("  ");
      }
    }
    printf("\n");
  }
  
  return 0;
}
