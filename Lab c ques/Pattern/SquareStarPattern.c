// *****
// *****
// *****
// *****
// *****
#include <stdio.h>

int main() {
    int rows = 5;
    int columns = 5;
    int i, j;

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= columns; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
