#include <stdio.h>

int main() {
    int n, sum = 0, i = 1;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    while (i <= n) {
        if (i % 2 != 0) {
            sum += i;
        }
        i++;
    }

    printf("Sum of odd numbers from 1 to %d is %d\n", n, sum);

    return 0;
}
