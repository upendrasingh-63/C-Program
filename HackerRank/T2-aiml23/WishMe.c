#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    if((4<=a<=11)&&(0<=b<=59))
    {
        printf("Good Morning");
    }
    else if((12<=a<=15)&&(0<=b<=59))
    {
        printf("Good AfterNoon");
    }
    else if((16<=a<=20)&&(0<=b<=59))
    {
        printf("Good Evening");
    }
    else if((22<=a<=23)&&(0<=b<=59)||(1<=a<=3)&&(0<=b<=59))
    {
        printf("Good Night");
    }
    return 0;
}
