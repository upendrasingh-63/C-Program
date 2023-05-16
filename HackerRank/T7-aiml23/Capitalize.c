#include <stdio.h>
#include <ctype.h>

void capitalizeString(char *string) {
    int capitalizeNext = 1;  // Flag to indicate whether the next character should be capitalized

    for (int i = 0; string[i] != '\0'; i++) {
        if (isalpha(string[i])) {
            if (capitalizeNext) {
                string[i] = toupper(string[i]);  // Capitalize the character
                capitalizeNext = 0;
            } else {
                string[i] = tolower(string[i]);  // Convert the character to lowercase
            }
        } else {
            capitalizeNext = 1;  // Reset the flag for the next word
        }
    }
}

int main() {
    char string[10001];
    fgets(string, sizeof(string), stdin);
    string[strcspn(string, "\n")] = '\0';  // Remove trailing newline, if present

    capitalizeString(string);

    printf("%s\n", string);

    return 0;
}
