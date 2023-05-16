#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    float cp,sp,pft,perp,perl,loss;
    scanf("%f %f",&cp,&sp);
    pft=sp-cp;
    loss=cp-sp;
    perp=(pft*100)/cp;
    perl=(loss*100)/cp;
    
    cp>sp?printf("Loss\n%.2f%%",perl):printf("Profit\n%.2f%%",perp);
    return 0;
}
