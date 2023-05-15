#include <stdio.h>

int main() {
    int n, i, j, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++) {
        int isPrime = 1;

        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            sum += i;
        }
    }

    printf("Sum of prime numbers between 1 and %d: %d\n", n, sum);

    return 0;
}
