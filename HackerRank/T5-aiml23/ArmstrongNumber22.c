#include <stdio.h>
int main() {
    int num, originalNum, remainder, result = 0;
    scanf("%d", &num);
    originalNum = num;

    while (originalNum != 0) {
       // remainder contains the last digit
        remainder = originalNum % 10;
        
       result += remainder * remainder * remainder;
        
       // removing last digit from the orignal number
       originalNum /= 10;
    }

    if (result == num)
        printf("Armstrong Number.");
    else
        printf("Not Armstrong.");

    return 0;
}
