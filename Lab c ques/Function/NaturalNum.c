#include <stdio.h>

void printNaturalNumbers(int n) {
    printf("Natural numbers from 1 to %d are: ", n);
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printNaturalNumbers(n);
    return 0;
}
