#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i = 0, j, length;
    int isPalindrome = 1;

    printf("Enter a string: ");
    gets(str);

    length = strlen(str);

    j = length - 1;

    while (i < j) {
        if (str[i] != str[j]) {
            isPalindrome = 0;
            break;
        }
        i++;
        j--;
    }

    if (isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
