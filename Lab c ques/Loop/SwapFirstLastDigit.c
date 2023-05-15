#include <stdio.h>

int main() {
    int num, swappedNum, firstDigit, lastDigit, digits = 0, power = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    lastDigit = num % 10;

    while (num != 0) {
        firstDigit = num % 10;
        num /= 10;
        digits++;
    }

    swappedNum = lastDigit * power;
    swappedNum += num % (power * 10);
    swappedNum -= lastDigit;
    swappedNum += firstDigit;

    printf("Number after swapping: %d\n", swappedNum);

    return 0;
}
