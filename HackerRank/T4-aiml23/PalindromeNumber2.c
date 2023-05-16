#include<stdio.h>
int main()
{
    int a,b,c=0;
    scanf("%d",&a);
    b=a;
    while (b)
    {
        c=(c*10)+b%10;
        b=b/10;
    }
    if(a==c)
    {
        printf("Palindrome.");
    }
    else
    {
        printf("Not Palindrome.");
    }
    return 0;
}
