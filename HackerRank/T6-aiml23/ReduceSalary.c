#include <stdio.h>

int main() {
  int n, i, max1 = 0, max2 = 0;
  scanf("%d", &n);
  
  int salaries[n];
  for (i = 0; i < n; i++) {
    scanf("%d", &salaries[i]);
    if (salaries[i] > max1) {
      max2 = max1;
      max1 = salaries[i];
    } else if (salaries[i] > max2 && salaries[i] < max1) {
      max2 = salaries[i];
    }
  }
  
  printf("%d %d\n", max1, max2);
  
  return 0;
}
