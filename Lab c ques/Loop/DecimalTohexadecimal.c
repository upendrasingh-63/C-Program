
47. Convert a decimal number to hexadecimal number system:
```c
#include <stdio.h>

int main() {
    int decimalNum, remainder;
    char hexadecimalNum[32];
    int index = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNum);

    // Convert decimal to hexadecimal
    while (decimalNum > 0) {
        remainder = decimalNum % 16;
        if (remainder < 10) {
            hexadecimalNum[index] = remainder + '0';
        } else {
            hexadecimalNum[index] = remainder + 'A' - 10;
        }
        decimalNum /= 16;
        index++;
    }

    printf("Hexadecimal number: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%c", hexadecimalNum[i]);
    }
    printf("\n");

    return 0;
}
