#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    scanf("%d", &n);

    long long int matrix[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%lld", &matrix[i][j]);
        }
    }

    bool has_folded_side = false;
    for (int i = 0; i < n; i++) {
        bool all_zeros = true;
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] != 0) {
                all_zeros = false;
                break;
            }
        }
        if (all_zeros) {
            printf("Folded\n");
            printf("%s\n", i == 0 ? "Top" : "Bottom");
            has_folded_side = true;
            break;
        }
    }

    if (!has_folded_side) {
        bool is_symmetric = true;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] != matrix[j][i]) {
                    is_symmetric = false;
                    break;
                }
            }
            if (!is_symmetric) {
                break;
            }
        }
        if (is_symmetric) {
            printf("Not Folded\n");
        } else {
            bool folded_left = false;
            bool folded_right = false;
            for (int i = 0; i < n; i++) {
                bool all_zeros = true;
                for (int j = 0; j < n; j++) {
                    if (matrix[j][i] != 0) {
                        all_zeros = false;
                        break;
                    }
                }
                if (all_zeros) {
                    if (i == 0) {
                        folded_left = true;
                    } else if (i == n-1) {
                        folded_right = true;
                    }
                }
            }
            if (folded_left) {
                printf("Folded\n");
                printf("Left\n");
            } else if (folded_right) {
                printf("Folded\n");
                printf("Right\n");
            } else {
                printf("Not Folded\n");
            }
        }
    }

    return 0;
}
