
17. Check whether a number is palindrome or not:
```c
#include <stdio.h>

int main() {
    int num, originalNum, reverse = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    while (num != 0) {
        reverse = reverse * 10 + num % 10;
        num /= 10;
    }

    if (originalNum == reverse) {
        printf("Palindrome\n");
    } else {
        printf("Not a Palindrome\n");
    }

    return 0;
}
