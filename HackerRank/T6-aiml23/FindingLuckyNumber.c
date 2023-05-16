#include <stdio.h>

int is_lucky(int n) {
  int has_three = 0, has_nine = 0;
  while (n > 0) {
    int digit = n % 10;
    if (digit == 3) {
      has_three = 1;
    } else if (digit == 9) {
      has_nine = 1;
    }
    n /= 10;
  }
  return has_three && has_nine;
}

int main() {
  int n;
  scanf("%d", &n);
  if (is_lucky(n)) {
    printf("Yes\n");
  } else {
    printf("No\n");
  }
  return 0;
}
