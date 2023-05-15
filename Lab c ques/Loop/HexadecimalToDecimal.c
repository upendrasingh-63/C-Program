#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    char hexadecimalNum[32];
    int decimalNum = 0;
    int digit, position = 0;

    printf("Enter a hexadecimal number: ");
    scanf("%s", hexadecimalNum);

    // Convert hexadecimal to decimal
    for (int i = strlen(hexadecimalNum) - 1; i >= 0; i--) {
        digit = (hexadecimalNum[i] >= '0' && hexadecimalNum[i] <= '9') ? hexadecimalNum[i] - '0' : hexadecimalNum[i] - 'A' + 10;
        decimalNum += digit * pow(16, position);
        position++;
    }

    printf("Decimal number: %d\n", decimalNum);

    return 0;
}
