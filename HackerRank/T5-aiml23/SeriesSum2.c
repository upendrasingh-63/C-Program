#include <stdio.h>
#include <math.h>

int main() {
   int n, i;
   float sum = 0.0;
   scanf("%d", &n);

   for(i = 1; i <= n; i++) {
      sum += pow((2*i-1), 2)/pow((2*i-1), 3);
   }

   printf("%f\n", sum);

   return 0;
}
