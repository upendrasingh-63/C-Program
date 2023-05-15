#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) ? printf("Alphabet\n") : printf("Not an alphabet\n");

    return 0;
}
