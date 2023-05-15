#include <stdio.h>

int factorial(int num);

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Strong numbers between 1 and %d: ", n);
    for (int i = 1; i <= n; i++) {
        int originalNum = i;
        int remainder, sum = 0;

        while (originalNum != 0) {
            remainder = originalNum % 10;
            sum += factorial(remainder);
            originalNum /= 10;
        }

        if (sum == i) {
            printf("%d ", i);
        }
    }

    return 0;
}

int factorial(int num) {
    int fact = 1;

    for (int i = 1; i <= num; i++) {
        fact *= i;
    }

    return fact;
}
