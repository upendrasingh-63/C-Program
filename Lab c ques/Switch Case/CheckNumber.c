#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    switch (number > 0) {
        case 1:
            printf("%d is positive.\n", number);
            break;
        case 0:
            switch (number < 0) {
                case 1:
                    printf("%d is negative.\n", number);
                    break;
                case 0:
                    printf("The number is zero.\n");
                    break;
            }
            break;
    }

    return 0;
}
