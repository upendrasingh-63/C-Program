#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int y,i=1;
    scanf("%d",&y);
    for(;i<=y;i++)
    {
        if((i%400==0)||(i%4==0&&i%100!=0))
        {
            printf("%d ",i);
        }
    }
    return 0;
}
