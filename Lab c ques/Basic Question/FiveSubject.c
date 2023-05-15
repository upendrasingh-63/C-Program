#include <stdio.h>

int main() {
    int marks1, marks2, marks3, marks4, marks5;
    int total;
    float average, percentage;

    printf("Enter marks of five subjects: ");
    scanf("%d %d %d %d %d", &marks1, &marks2, &marks3, &marks4, &marks5);

    total = marks1 + marks2 + marks3 + marks4 + marks5;
    average = total / 5.0;
    percentage = (total / 500.0) * 100;

    printf("Total marks: %d\n", total);
    printf("Average marks: %.2f\n", average);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
