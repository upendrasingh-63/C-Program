#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    int gcdValue = gcd(a, b);
    int lcmValue = (a * b) / gcdValue;
    return lcmValue;
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    int result = lcm(num1, num2);
    printf("The LCM of %d and %d is %d\n", num1, num2, result);
    return 0;
}
