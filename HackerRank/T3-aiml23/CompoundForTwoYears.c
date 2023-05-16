#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int p,r;
    scanf("%d%d",&p,&r);
    float c;
    c=p*pow((1+r*.01),2);
    printf("%.2f",c-p);
    return 0;
}
