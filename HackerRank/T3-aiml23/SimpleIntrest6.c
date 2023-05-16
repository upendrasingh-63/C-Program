#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int p,r,t;
    scanf("%d%d%d",&p,&r,&t);
    printf("%.0d",p+(p*r*t)/100);
    return 0;
}
