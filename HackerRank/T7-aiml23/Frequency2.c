#include <stdio.h>

int getCharacterFrequency(char *string, char character) {
    int frequency = 0;

    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] == character) {
            frequency++;
        }
    }

    return frequency;
}

int main() {
    char string[10001];
    fgets(string, sizeof(string), stdin);
    string[strcspn(string, "\n")] = '\0';  // Remove trailing newline, if present

    char character;
    scanf("%c", &character);

    int frequency = getCharacterFrequency(string, character);

    printf("%d\n", frequency);

    return 0;
}
