#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int matrix[5][5], row, col, moves = 0;
    for (row = 0; row < 5; row++) {
        for (col = 0; col < 5; col++) {
            scanf("%d", &matrix[row][col]);
            if (matrix[row][col] == 1) {
                moves = abs(row - 2) + abs(col - 2);
            }
        }
    }
    printf("%d\n", moves);
    return 0;
}
