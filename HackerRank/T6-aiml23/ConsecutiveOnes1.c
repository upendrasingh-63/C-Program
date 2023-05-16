#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int max_consecutive_ones = 0;
    int current_consecutive_ones = 0;
    while (n > 0) {
        if (n % 2 == 1) {
            current_consecutive_ones++;
            if (current_consecutive_ones > max_consecutive_ones) {
                max_consecutive_ones = current_consecutive_ones;
            }
        } else {
            current_consecutive_ones = 0;
        }
        n /= 2;
    }

    printf("%d\n", max_consecutive_ones);

    return 0;
}
