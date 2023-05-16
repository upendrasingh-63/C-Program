#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char a;
    int l_v,u_v;
    scanf("%c",&a);
    l_v=(a=='a'||a=='e'||a=='i'||a=='o'||a=='u');
    u_v=(a=='A'||a=='E'||a=='I'||a=='O'||a=='U');
    if(!isalpha(a))
    {
        printf("Not an alphabet.");
    }
    else if(l_v||u_v)
    {
        printf("Vowel.");
    }
    else
    {
        printf("Consonant.");
    }
    return 0;
}
