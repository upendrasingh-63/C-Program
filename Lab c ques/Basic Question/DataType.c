#include <stdio.h>

int main() {
    int integer;
    float floatingPoint;
    char character;

    printf("Enter an integer: ");
    scanf("%d", &integer);

    printf("Enter a floating-point number: ");
    scanf("%f", &floatingPoint);

    printf("Enter a character: ");
    scanf(" %c", &character);

    printf("Integer: %d\n", integer);
    printf("Floating-point number: %f\n", floatingPoint);
    printf("Character: %c\n", character);

    return 0;
}
