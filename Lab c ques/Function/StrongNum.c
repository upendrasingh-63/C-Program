#include <stdio.h>

int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int isStrong(int num) {
    int originalNum = num;
    int sum = 0;
    int digit;
    
    while (num != 0) {
        digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }
    
    return (sum == originalNum);
}

