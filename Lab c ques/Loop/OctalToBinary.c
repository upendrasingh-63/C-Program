
42. Convert an octal number to binary number system:
```c
#include <stdio.h>

int main() {
    long long octalNum, binaryNum = 0;
    int digit, position = 0;

    printf("Enter an octal number: ");
    scanf("%lld", &octalNum);

    // Convert octal to binary
    while (octalNum != 0) {
        digit = octalNum % 10;
        switch (digit) {
            case 0:
                binaryNum += 0;
                break;
            case 1:
                binaryNum += 1;
                break;
            case 2:
                binaryNum += 10;
                break;
            case 3:
                binaryNum += 11;
                break;
            case 4:
                binaryNum += 100;
                break;
            case 5:
                binaryNum += 101;
                break;
            case 6:
                binaryNum += 110;
                break;
            case 7:
                binaryNum += 111;
                break;
        }
        octalNum /= 10;
        position++;
    }

    printf("Binary number: %lld\n", binaryNum);

    return 0;
}
