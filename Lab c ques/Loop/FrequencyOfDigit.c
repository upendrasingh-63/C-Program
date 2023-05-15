#include <stdio.h>

int main() {
    int num, digit, frequency[10] = {0};
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;
        frequency[digit]++;
        num /= 10;
    }

    printf("Frequency of each digit:\n");
    for (int i = 0; i < 10; i++) {
        printf("Digit %d: %d\n", i, frequency[i]);
    }

    return 0;
}
