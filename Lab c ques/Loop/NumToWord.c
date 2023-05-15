#include <stdio.h>

int main() {
    int num, digit, revNum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;
        revNum = revNum * 10 + digit;
        num /= 10;
    }

    while (revNum != 0) {
        digit = revNum % 10;

        switch (digit) {
            case 0:
                printf("Zero ");
                break;
            case 1:
                printf("One ");
                break;
            case 2:
                printf("Two ");
                break;
            case 3:
                printf("Three ");
                break;
            case 4:
                printf("Four ");
                break;
            case 5:
                printf("Five ");
                break;
            case 6:
                printf("Six ");
                break;
            case 7:
                printf("Seven ");
                break;
            case 8:
                printf("Eight ");
                break;
            case 9:
                printf("Nine ");
                break;
        }

        revNum /= 10;
    }

    return 0;
}
