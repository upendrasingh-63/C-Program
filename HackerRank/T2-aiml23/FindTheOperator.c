#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a,b,r;
    scanf("%d %d %d",&a,&b,&r);
    
    if(a+b==r)
    {
        printf("+");
    }
    else if(a*b==r)
    {
        printf("*");
    }
    else if(a-b==r || b-a==r)
    {
        printf("-");
    }
    else if (b != 0 && a / b == r) {
        printf("/\n");
    } else if (a != 0 && b / a == r) {
        printf("/\n");
    } else if (b != 0 && a % b == r) {
        printf("%%\n");
    } else if (a != 0 && b % a == r) {
        printf("%%\n");
    } else {
        printf("no operator found\n");
    }
    return 0;
}
