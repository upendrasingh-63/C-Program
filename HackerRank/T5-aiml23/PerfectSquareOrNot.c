#include <stdio.h>
#include <math.h>

int main() {
   int t, i;
   long long n;

   scanf("%d", &t);

   for(i = 1; i <= t; i++) {
      scanf("%lld", &n);
      
      // Check if square root of n is an integer
      if(sqrt(n) == (int)sqrt(n)) {
         printf("Perfect Square\n");
      } else {
         printf("Not a Perfect Square\n");
      }
   }

   return 0;
}
