#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a,sum=0;
    scanf("%d",&a);
    while(a>=1)
    {
        sum+=a;
        a--;
    }
    printf("%d",sum);
    return 0;
}
