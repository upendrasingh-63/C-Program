#include <stdio.h>

int main() {
    int decimalNum, octalNum[32], index = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNum);
   // Convert decimal to octal
while (decimalNum > 0) {
    octalNum[index] = decimalNum % 8;
    decimalNum /= 8;
    index++;
}

printf("Octal number: ");
for (int i = index - 1; i >= 0; i--) {
    printf("%d", octalNum[i]);
}
printf("\n");

return 0;
} 
