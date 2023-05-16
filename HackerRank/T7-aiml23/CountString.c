#include <stdio.h>
#include <ctype.h>
#include <string.h>

void count_characters(char *string) {
    int length = strlen(string);
    int uppercase_count = 0;
    int lowercase_count = 0;
    int special_count = 0;

    for (int i = 0; i < length; i++) {
        if (isalpha(string[i])) {
            if (isupper(string[i]))
                uppercase_count++;
            else
                lowercase_count++;
        }
        else {
            special_count++;
        }
    }

    printf("%d\n", uppercase_count);
    printf("%d\n", lowercase_count);
    printf("%d\n", special_count);
}

int main() {
    char string[1000];
    fgets(string, sizeof(string), stdin);
    string[strcspn(string, "\n")] = '\0';  // Remove trailing newline, if present
    count_characters(string);

    return 0;
}
