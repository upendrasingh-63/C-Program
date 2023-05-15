#include <stdio.h>
#include <string.h>

int main() {
    char hexadecimalNum[32];
    long long binaryNum = 0;
    int digit, position = 0;

    printf("Enter a hexadecimal number: ");
    scanf("%s", hexadecimalNum);

    // Convert hexadecimal to binary
    for (int i = strlen(hexadecimalNum) - 1; i >= 0; i--) {
        digit = (hexadecimalNum[i] >= '0' && hexadecimalNum[i] <= '9') ? hexadecimalNum[i] - '0' : hexadecimalNum[i] - 'A' + 10;
        for (int j = 0; j < 4; j++) {
            binaryNum += (digit % 2) * pow(10, position);
            digit /= 2;
            position++;
        }
    }

    printf("Binary number: %lld\n", binaryNum);

    return 0;
}
