#include <stdio.h>
#include <math.h>

int main() {
    float principal, time, rate, compoundInterest;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter time (in years): ");
    scanf("%f", &time);

    printf("Enter rate of interest: ");
    scanf("%f", &rate);

    compoundInterest = principal * (pow(1 + rate / 100, time)) - principal;

    printf("Compound Interest: %.2f\n", compoundInterest);

    return 0;
}
