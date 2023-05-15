#include <stdio.h>
#include <math.h>

int main() {
    long long binaryNum, octalNum = 0;
    int digit, position = 0;

    printf("Enter a binary number: ");
    scanf("%lld", &binaryNum);

    // Convert binary to octal
    while (binaryNum != 0) {
        digit = binaryNum % 1000;
        switch (digit) {
            case 0:
                octalNum += 0 * pow(10, position);
                break;
            case 1:
                octalNum += 1 * pow(10, position);
break;
case 10:
octalNum += 2 * pow(10, position);
break;
case 11:
octalNum += 3 * pow(10, position);
break;
case 100:
octalNum += 4 * pow(10, position);
break;
case 101:
octalNum += 5 * pow(10, position);
break;
case 110:
octalNum += 6 * pow(10, position);
break;
case 111:
octalNum += 7 * pow(10, position);
break;
}
binaryNum /= 1000;
position++;
}
printf("Octal number: %lld\n", octalNum);

return 0;
}
