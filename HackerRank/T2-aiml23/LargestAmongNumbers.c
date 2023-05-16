#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a,s,d;
    scanf("%d%d%d",&a,&s,&d);
    (a>s&&a>d)?printf("%d",a):(s>a&&s>d)?printf("%d",s):printf("%d",d);
    return 0;
}
