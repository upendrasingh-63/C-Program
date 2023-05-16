#include <stdio.h>
#include <string.h>

void swap_adjacent_characters(char *string) {
    int length = strlen(string);
    if (length % 2 != 0) {
        printf("Odd length.\n");
        return;
    }

    for (int i = 0; i < length; i += 2) {
        char temp = string[i];
        string[i] = string[i+1];
        string[i+1] = temp;
    }

    printf("%s\n", string);
}

int main() {
    char string[1000];
    fgets(string, sizeof(string), stdin);
    string[strcspn(string, "\n")] = '\0';  // Remove trailing newline, if present
    swap_adjacent_characters(string);

    return 0;
}
