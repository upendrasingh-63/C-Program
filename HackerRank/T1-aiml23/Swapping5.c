#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b,t;
    scanf("%d",&a);
    scanf("%d",&b);
    t=b,b=a,a=t;
    printf("%d ",a);
    printf("%d",b);
    return 0;
}
