#include <stdio.h>

int main() {
    int binaryNum[32], onesComplement[32], length, i;

    printf("Enter a binary number: ");
    scanf("%s", binaryNum);

    // Calculate the length of the binary number
    for (length = 0; binaryNum[length] != '\0'; length++);

    // Generate the one's complement
    for (i = 0; i < length; i++) {
        if (binaryNum[i] == '0') {
            onesComplement[i] = '1';
        } else {
            onesComplement[i] = '0';
        }
    }
    onesComplement[i] = '\0';

    printf("One's complement: %s\n", onesComplement);

    return 0;
}
