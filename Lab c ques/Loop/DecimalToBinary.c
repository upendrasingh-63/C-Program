#include <stdio.h>

int main() {
    int decimalNum, binaryNum[32], index = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNum);

    // Convert decimal to binary
    while (decimalNum > 0) {
        binaryNum[index] = decimalNum % 2;
        decimalNum /= 2;
        index++;
    }

    printf("Binary number: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binaryNum[i]);
    }
    printf("\n");

    return 0;
}
