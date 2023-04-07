#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],b[n],c[2*n],i;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
	for(i=0;i<n;i++)
		scanf("%d",&b[i]);
	for(i=0;i<n;i++)
		printf("%d ",b[i]);
	printf("\n");
	for(i=0;i<n;i++)
		c[i]=a[i];
	for(i=0;i<10;i++)
		c[n+i]=b[i];
	for(i=0;i<2*n;i++)
		printf("%d ",c[i]);
	return 0;
}
