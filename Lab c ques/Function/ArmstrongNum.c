#include <stdio.h>
#include <math.h>

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

void printArmstrongNumbers(int start, int end) {
    printf("Armstrong numbers between %d and %d are: ", start, end);
    for (int i = start; i <= end; i++) {
        if (isArmstrong(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int start, end;
    printf("Enter the start and end of the interval: ");
    scanf("%d %d", &start, &end);
    printArmstrongNumbers(start, end);
    return 0;
}
