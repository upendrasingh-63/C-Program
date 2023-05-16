#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int c,k,n;
    scanf("%d%d%d",&c,&k,&n);
    printf("%.0f",c*pow(k,n));
    return 0;
}
