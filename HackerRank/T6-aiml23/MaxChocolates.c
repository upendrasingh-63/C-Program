#include <stdio.h>

int main() {
    int t;
    long long n;
    scanf("%d", &t);
    while(t--) {
        scanf("%lld", &n);
        long long i;
        for(i = 2; i*i <= n; i++) {
            if(n % i == 0) {
                printf("%lld\n", n/i);
                break;
            }
        }
        if(i*i > n) {
            printf("%lld\n", n);
        }
    }
    return 0;
}
