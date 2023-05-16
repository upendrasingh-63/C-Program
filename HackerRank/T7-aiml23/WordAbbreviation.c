#include <stdio.h>
#include <string.h>

void storeWord(char *word) {
    int length = strlen(word);

    if (length > 10) {
        printf("%c%d%c\n", word[0], length - 2, word[length - 1]);
    } else {
        printf("%s\n", word);
    }
}

int main() {
    int t;
    scanf("%d", &t);
    getchar();  // Read and discard the newline character

    while (t--) {
        char word[101];
        fgets(word, sizeof(word), stdin);
        word[strcspn(word, "\n")] = '\0';  // Remove trailing newline, if present

        storeWord(word);
    }

    return 0;
}
