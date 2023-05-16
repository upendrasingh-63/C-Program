#include <stdio.h>
#include <ctype.h>
#include <string.h>

void print_vowels_and_consonants(char *string) {
    int length = strlen(string);
    char vowels[10000] = "";
    char consonants[10000] = "";
    int vowel_count = 0;
    int consonant_count = 0;

    for (int i = 0; i < length; i++) {
        char ch = tolower(string[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels[vowel_count++] = string[i];
        }
        else {
            consonants[consonant_count++] = string[i];
        }
    }

    vowels[vowel_count] = '\0';
    consonants[consonant_count] = '\0';

    printf("%s\n", vowels);
    printf("%s\n", consonants);
}

int main() {
    char string[10000];
    fgets(string, sizeof(string), stdin);
    string[strcspn(string, "\n")] = '\0';  // Remove trailing newline, if present
    print_vowels_and_consonants(string);

    return 0;
}
