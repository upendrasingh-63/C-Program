#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);

    while(T--) {
        char S[1000001], A[1000001];
        scanf("%s %s", S, A);

        if(strstr(S, A) != NULL) {
            printf("Yes\n");
        }
        else {
            printf("No\n");
        }
    }

    return 0;
}
