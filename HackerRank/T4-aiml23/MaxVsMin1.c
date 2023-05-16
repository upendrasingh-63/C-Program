#include <stdio.h>
#include <limits.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int min = INT_MAX, max = INT_MIN, num;
        for (int i = 0; i < n; i++) {
            scanf("%d", &num);
            if (num < min) min = num;
            if (num > max) max = num;
        }

        printf("Min=%d Max=%d\n", min, max);
    }

    return 0;
}

