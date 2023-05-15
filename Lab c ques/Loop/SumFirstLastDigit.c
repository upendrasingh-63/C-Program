#include <stdio.h>

int main() {
    int num, firstDigit, lastDigit, sum;
    printf("Enter a number: ");
    scanf("%d", &num);

    lastDigit = num % 10;

    while (num != 0) {
        firstDigit = num % 10;
        num /= 10;
    }

    sum = firstDigit + lastDigit;

    printf("Sum of first and last digit: %d\n", sum);

    return 0;
}
