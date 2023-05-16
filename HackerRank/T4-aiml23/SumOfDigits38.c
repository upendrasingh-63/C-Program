#include<stdio.h>
int main()
{
    int a,t,sum=0;
    scanf("%d",&t);
    while(t)
    {
    scanf("%d",&a);
    while (a)
    {
        sum+=a%10;
        a=a/10;
    }
    printf("%d\n",sum);
    sum=0;
    t--;
    }
    return 0;
}
