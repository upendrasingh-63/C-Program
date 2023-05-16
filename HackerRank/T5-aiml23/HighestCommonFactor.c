#include <stdio.h>

int main() {
   int num1, num2, temp, gcd;

   scanf("%d", &num1);

   scanf("%d", &num2);

   // Swap the numbers if num2 is greater than num1
   if (num2 > num1) {
      temp = num1;
      num1 = num2;
      num2 = temp;
   }

   // Euclidean algorithm to find gcd
   while (num2 != 0) {
      temp = num2;
      num2 = num1 % num2;
      num1 = temp;
   }

   gcd = num1;
   printf("%d", gcd);

   return 0;
}
