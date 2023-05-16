#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isVowel(char c) {
    c = tolower(c);  // Convert the character to lowercase for easier comparison

    // Check if the character is a vowel
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        return true;
    
    return false;
}

void removeVowels(char *string) {
    int i, j;
    int length = strlen(string);

    for (i = 0, j = 0; i < length; i++) {
        if (!isVowel(string[i])) {
            string[j] = string[i];
            j++;
        }
    }
    
    string[j] = '\0';  // Null-terminate the string after removing the vowels
}

int main() {
    char string[10001];
    fgets(string, sizeof(string), stdin);
    string[strcspn(string, "\n")] = '\0';  // Remove trailing newline, if present

    removeVowels(string);

    printf("%s\n", string);

    return 0;
}
