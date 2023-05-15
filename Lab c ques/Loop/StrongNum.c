#include <stdio.h>

int factorial(int num);

int main() {
    int num, originalNum, remainder, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10;
        sum += factorial(remainder);
        originalNum /= 10;
    }

    if (sum == num) {
        printf("%d is a strong number.\n", num);
    } else {
        printf("%d is not a strong number.\n", num);
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
