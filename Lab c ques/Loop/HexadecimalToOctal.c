#include <stdio.h>
#include <string.h>

int main() {
    char hexadecimalNum[32];
    long long octalNum = 0;
    int digit, position = 0;

    printf("Enter a hexadecimal number: ");
    scanf("%s", hexadecimalNum);

    // Convert hexadecimal to octal
    for (int i = strlen(hexadecimalNum) - 1; i >= 0; i--) {
        digit = (hexadecimalNum[i] >= '0' && hexadecimalNum[i] <= '9') ? hexadecimalNum[i] - '0' : hexadecimalNum[i] - 'A' + 10;
        octalNum += digit * pow(16, position);
        position++;
    }

    printf("Octal number: %lld\n", octalNum);

    return 0;
}
