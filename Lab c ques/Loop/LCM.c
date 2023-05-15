#include <stdio.h>

int main() {
    int num1, num2, lcm;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    lcm = (num1 > num2) ? num1 : num2;

    while (1) {
        if (lcm % num1 == 0 && lcm % num2 == 0) {
            break;
        }
        lcm++;
    }

    printf("LCM of %d and %d = %d\n", num1, num2, lcm);

    return 0;
}
