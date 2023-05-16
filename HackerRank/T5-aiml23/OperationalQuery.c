#include <stdio.h>

int main() {
    int n, q, i, x, res;
    char op;

    scanf("%d %d", &n, &q);

    scanf(" %c %d", &op, &x); // first query
    if (op == '&') res = n & x;
    else if (op == '|') res = n | x;
    else if (op == '^') res = n ^ x;
    else if (op == '+') res = n + x;
    else if (op == '-') res = n - x;
    else if (op == '*') res = n * x;
    else if (op == '/') res = n / x;
    else if (op == '%') res = n % x;

    for (i = 1; i < q; i++) {
        scanf(" %c %d", &op, &x);
        if (op == '&') res &= x;
        else if (op == '|') res |= x;
        else if (op == '^') res ^= x;
        else if (op == '+') res += x;
        else if (op == '-') res -= x;
        else if (op == '*') res *= x;
        else if (op == '/') res /= x;
        else if (op == '%') res %= x;
    }

    printf("%d\n", res);

    return 0;
}
