#include <stdio.h>
#include <string.h>

void printIndexes(const char *string, char target) {
    int length = strlen(string);
    int found = 0;

    for (int i = 0; i < length; i++) {
        if (string[i] == target) {
            printf("%d ", i+1);
            found = 1;
        }
    }

    if (!found) {
        printf("Character not found");
    }
    printf("\n");
}

int main() {
    char string[10001];
    fgets(string, sizeof(string), stdin);
    string[strcspn(string, "\n")] = '\0';  // Remove trailing newline, if present

    char target;
    scanf("%c", &target);
    getchar();  // Read and discard the newline character

    printIndexes(string, target);

    return 0;
}
