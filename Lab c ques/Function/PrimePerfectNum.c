#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int isArmstrong(int num) {
    int originalNum = num;
    int sum = 0;
    int digit;
    int numDigits = 0;
    
    while (num != 0) {
        numDigits++;
        num /= 10;
    }
    
    num = originalNum;
    
    while (num != 0) {
        digit = num % 10;
        sum += pow(digit, numDigits);
        num /= 10;
    }
    
    return (sum == originalNum);
}

int isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return (sum == num);
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    if (isPrime(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }
    
    if (isArmstrong(number)) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }
    
    if (isPerfect(number)) {
        printf("%d is a perfect number.\n", number);
    } else {
        printf("%d is not a perfect number.\n", number);
    }
    
    return 0;
}
