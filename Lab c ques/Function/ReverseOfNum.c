#include <stdio.h>

int reverseNumber(int num) {
    int reverse = 0;
    while (num != 0) {
        int digit = num % 10;
        reverse = reverse * 10 + digit;
        num /= 10;
    }
    return reverse;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    int reversedNumber = reverseNumber(number);
    printf("Reverse of %d is %d\n", number, reversedNumber);
    return 0;
}
