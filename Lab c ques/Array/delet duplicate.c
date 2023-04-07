#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],b[10]={0},c[]={},i;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		b[a[i]]++;
	for(i=0;i<10;i++)
		if(b[i]<=1)
			c[i]=a[i];
	for(i=0;i<n;i++)
		printf("%d ",c[i]);
	return 0;
}
