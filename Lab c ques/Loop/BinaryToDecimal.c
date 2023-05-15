#include <stdio.h>
#include <math.h>

int main() {
    long long binaryNum;
    int decimalNum = 0, remainder, position = 0;

    printf("Enter a binary number: ");
    scanf("%lld", &binaryNum);

    // Convert binary to decimal
    while (binaryNum != 0) {
        remainder = binaryNum % 10;
        decimalNum += remainder * pow(2, position);
        binaryNum /= 10;
        position++;
    }

    printf("Decimal number: %d\n", decimalNum);

    return 0;
}
