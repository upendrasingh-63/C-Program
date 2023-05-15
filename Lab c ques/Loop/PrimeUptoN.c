#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Prime numbers between 1 and %d: ", n);
    for (i = 2; i <= n; i++) {
        int isPrime = 1;

        for (j
