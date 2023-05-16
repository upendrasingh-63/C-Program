#include <stdio.h>

int main() {
   int n;
   double sum = 0, fact = 1;

   scanf("%d", &n);

   for (int i = 1; i <= n; i++) {
      fact *= i; // calculate factorial
      sum += i / fact; // calculate series sum
   }

   printf("%lf\n", sum);

   return 0;
}
