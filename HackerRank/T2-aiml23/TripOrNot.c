#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int N,S,C,H,L,T;
    scanf("%d%d%d%d%d%d",&N,&S,&C,&H,&L,&T);
    if((N*S*C*H)<=(L*T))
    {
        printf("Padhai Karenge");
    }
    else
    {
        printf("Goa Jaayenge");
    }
    return 0;
}
