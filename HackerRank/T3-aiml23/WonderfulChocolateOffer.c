#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int d,n,c;
    scanf("%d%d%d",&c,&n,&d);
    printf("%d",(d*n+c)-n);
    return 0;
}
