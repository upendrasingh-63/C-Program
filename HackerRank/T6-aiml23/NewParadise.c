#include <stdio.h>

int main() {
  int n, i, max_routes = 0, count = 0;
  scanf("%d", &n);
  
  int routes[n];
  for (i = 0; i < n; i++) {
    scanf("%d", &routes[i]);
    if (routes[i] > max_routes) {
      max_routes = routes[i];
    }
  }
  
  for (i = 0; i < n; i++) {
    if (routes[i] == max_routes) {
      count++;
    }
  }
  
  printf("%d\n", count);
  
  return 0;
}
