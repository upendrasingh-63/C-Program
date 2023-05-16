#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,i=1;
    scanf("%d",&a);
    while(i<=a)
    {
        if(i%400==0||(i%4==0&&i%100!=0))
        {
            printf("%d ",i);
        }
        i++;
    }
    return 0;
}
