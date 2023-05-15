#include <stdio.h>

int main() {
    int num, firstDigit, lastDigit;
    printf("Enter a number: ");
    scanf("%d", &num);

    lastDigit = num % 10;

    while (num != 0) {
        firstDigit = num % 10;
        num /= 10;
    }

    printf("First digit: %d\nLast digit: %d\n", firstDigit, lastDigit);

    return 0;
}
