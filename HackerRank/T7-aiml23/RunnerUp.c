#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char find_second_max_occurrence(char *string) {
    int counts[26] = {0};  // Array to store the counts of each character
    int max1 = 0;  // Maximum occurrence count
    int max2 = 0;  // Second maximum occurrence count

    // Count the occurrences of each character
    for (int i = 0; string[i] != '\0'; i++) {
        counts[string[i] - 'a']++;
    }

    // Find the maximum and second maximum occurrence counts
    for (int i = 0; i < 26; i++) {
        if (counts[i] > max1) {
            max2 = max1;
            max1 = counts[i];
        } else if (counts[i] > max2 && counts[i] < max1) {
            max2 = counts[i];
        }
    }

    // Check if all characters have the same occurrence count
    if (max1 == max2 || max2 == 0) {
        return -1;
    }

    // Find the character with the second maximum occurrence
    for (int i = 0; i < 26; i++) {
        if (counts[i] == max2) {
            return 'a' + i;
        }
    }

    return -1;
}

int main() {
    int T;
    scanf("%d", &T);
    getchar();  // Read and discard the newline character

    while (T--) {
        char string[1000000];
        fgets(string, sizeof(string), stdin);
        string[strcspn(string, "\n")] = '\0';  // Remove trailing newline, if present

        char second_max = find_second_max_occurrence(string);
        if(isalpha(second_max))
        {
            printf("%c\n",second_max);
        }
        else{
            printf("%d\n",second_max);
        }
    }

    return 0;
}
