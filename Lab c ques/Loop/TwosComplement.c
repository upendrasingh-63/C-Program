#include <stdio.h>

int main() {
    int binaryNum[32], twosComplement[32], length, i;
    int carry = 1;

    printf("Enter a binary number: ");
    scanf("%s", binaryNum);

    // Calculate the length of the binary number
    for (length = 0; binaryNum[length] != '\0'; length++);

    // Reverse the binary number
    for (i = 0; i < length / 2; i++) {
        int temp = binaryNum[i];
        binaryNum[i] = binaryNum[length - i - 1];
        binaryNum[length - i - 1] = temp;
    }

    // Add 1 to the one's complement to get the two's complement
    for (i = 0; i < length; i++) {
        if (binaryNum[i] == '1' && carry == 1) {
            twosComplement[i] = '0';
        } else if (binaryNum[i] == '0' && carry == 1) {
            twosComplement[i] = '1';
            carry = 0;
        } else {
            twosComplement[i] = binaryNum[i];
        }
    }
    twosComplement[i] = '\0';

    // Reverse the two's complement to get the correct representation
    for (i = 0; i < length / 2; i++) {
        int temp = twosComplement[i];
        twosComplement[i] = twosComplement[length - i - 1];
        twosComplement[length - i - 1] = temp;
    }

    printf("Two's complement: %s\n", twosComplement);

    return 0;
}
