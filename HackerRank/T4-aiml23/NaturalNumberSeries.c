#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int sum=0,n;
    scanf("%d",&n);
    while(n>=1)
    {
        sum+=n;
        n--;
    }
    printf("%d",sum);
    return 0;
}
