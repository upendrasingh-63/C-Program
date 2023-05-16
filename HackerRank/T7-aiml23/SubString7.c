#include <stdio.h>
#include <string.h>

int isSubstringPresent(const char *string, const char *substring) {
    int stringLength = strlen(string);
    int subLength = strlen(substring);

    for (int i = 0; i <= stringLength - subLength; i++) {
        int j;
        for (j = 0; j < subLength; j++) {
            if (string[i + j] != substring[j])
                break;
        }
        if (j == subLength)
            return 1;
    }
    return 0;
}

int main() {
    char string[10001];
    fgets(string, sizeof(string), stdin);
    string[strcspn(string, "\n")] = '\0';  // Remove trailing newline, if present

    char substring[10001];
    fgets(substring, sizeof(substring), stdin);
    substring[strcspn(substring, "\n")] = '\0';  // Remove trailing newline, if present

    int isPresent = isSubstringPresent(string, substring);
    printf("%d\n", isPresent);

    return 0;
}
