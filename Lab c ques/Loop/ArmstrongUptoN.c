#include <stdio.h>
#include <math.h>

int main() {
    int n, i, originalNum, remainder, digits, result;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Armstrong numbers between 1 and %d: ", n);
    for (i = 1; i <= n; i++) {
        originalNum = i;
        result = 0;
        digits = 0;

        while (originalNum != 0) {
            originalNum /= 10;
            digits++;
        }

        originalNum = i;

        while (originalNum != 0) {
            remainder = originalNum % 10;
            result += pow(remainder, digits);
            originalNum /= 10;
        }

        if (result == i) {
            printf("%d ", i);
        }
   
