#include <stdio.h>

int is_valid_password(int n, int password[]) {
  int digits[10] = {0};
  for (int i = 0; i < n; i++) {
    digits[password[i]]++;
  }
  for (int i = 0; i < 10; i++) {
    if (digits[i] > 1) {
      return 0;
    }
  }
  return 1;
}

int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    int n;
    scanf("%d", &n);
    int password[n];
    for (int i = 0; i < n; i++) {
      scanf("%d", &password[i]);
    }
    if (is_valid_password(n, password)) {
      printf("correct\n");
    } else {
      printf("incorrect\n");
    }
  }
  return 0;
}
