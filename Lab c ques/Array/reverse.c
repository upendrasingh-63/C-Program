#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],c[]={},i;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	while(n)
	{
		printf("%d ",a[n-1]);
		n--;
	}
	return 0;
}
