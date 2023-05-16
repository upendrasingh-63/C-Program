#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int x, y;
        scanf("%d %d", &x, &y);
        int sum = x + y;
        int i = 1;
        while (true) {
            if (isPrime(sum + i)) {
                printf("%d\n", i);
                break;
            }
            i++;
        }
    }
    return 0;
}
