#include <stdio.h>
#include <ctype.h>
#include <string.h>

void toggle_case(char *string) {
    int length = strlen(string);

    for (int i = 0; i < length; i++) {
        if (isalpha(string[i])) {
            if (islower(string[i]))
                string[i] = toupper(string[i]);
            else
                string[i] = tolower(string[i]);
        }
    }

    printf("%s\n", string);
}

int main() {
    char string[1000];
    fgets(string, sizeof(string), stdin);
    string[strcspn(string, "\n")] = '\0';  // Remove trailing newline, if present
    toggle_case(string);

    return 0;
}
