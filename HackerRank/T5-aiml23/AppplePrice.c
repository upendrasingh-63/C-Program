#include <stdio.h>

int main()
{
    int n,a,b,c,d,e;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
       scanf("%d%d%d",&a,&b,&c);
        d=b/a;
        e=c*d;
        printf("%d\n",e);
    }
    return 0;
}
