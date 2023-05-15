#include <stdio.h>

int isPalindrome(int num) {
    int reversedNumber = 0;
    int originalNumber = num;
    
    while (num != 0) {
        int digit = num % 10;
        reversedNumber = reversedNumber * 10 + digit;
        num /= 10;
    }
    
    return (reversedNumber == originalNumber);
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    if (isPalindrome(number)) {
        printf("%d is a palindrome number.\n", number);
    } else {
        printf("%d is not a palindrome number.\n", number);
    }
    
    return 0;
}
