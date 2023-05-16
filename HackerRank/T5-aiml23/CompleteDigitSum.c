#include <stdio.h>

int digitalRoot(int n) {
   int sum = 0;

   // Calculate sum of digits
   while (n > 0 || sum > 9) {
      if (n == 0) {
         n = sum;
         sum = 0;
      }
      sum += n % 10;
      n /= 10;
   }

   return sum;
}

int main() {
   int n;

   scanf("%d", &n);

   int result = digitalRoot(n);

   printf("%d", result);

   return 0;
}
