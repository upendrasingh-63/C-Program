#include <stdio.h>
#include <math.h>

int main() {
    long long octalNum, hexadecimalNum = 0;
    int digit, position = 0;

    printf("Enter an octal number: ");
    scanf("%lld", &octalNum);

    // Convert octal to hexadecimal
    while (octalNum != 0) {
        digit = octalNum % 10;
        hexadecimalNum += digit * pow(8, position);
        octalNum /= 10;
        position++;
    }

    printf("Hexadecimal number: %llX\n", hexadecimalNum);

    return 0;
}
