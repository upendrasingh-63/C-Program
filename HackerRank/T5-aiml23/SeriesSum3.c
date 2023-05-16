#include <stdio.h>
#include <math.h>

int main() {
   int n;
   int sum = 0;

   scanf("%d", &n);

   for (int i = 1; i <= n; i++) {
      if (i % 2 == 0) {
         sum -= pow(i, 3); // subtract cube of even numbers
      }
      else {
         sum += pow(i, 3); // add cube of odd numbers
      }
   }

   printf("%d\n", sum);

   return 0;
}
