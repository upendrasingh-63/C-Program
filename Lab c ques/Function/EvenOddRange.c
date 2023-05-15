#include <stdio.h>

void printEvenNumbers(int start, int end) {
    printf("Even numbers between %d and %d are: ", start, end);
    for (int i = start; i <= end; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

void printOddNumbers(int start, int end) {
    printf("Odd numbers between %d and %d are: ", start, end);
    for (int i = start; i <= end; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int start, end;
    printf("Enter the start and end of the range: ");
    scanf("%d %d", &start, &end);
    
    printf("Enter 1 to print even numbers or 2 to print odd numbers: ");
    int choice;
    scanf("%d", &choice);
    
    if (choice == 1) {
        printEvenNumbers(start, end);
    } else if (choice == 2) {
        printOddNumbers(start, end);
    } else {
        printf("Invalid choice!\n");
    }
    
    return 0;
}
