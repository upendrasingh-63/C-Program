#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],i,neg=0;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		if(a[i]<0)
			neg++;
	printf("neg %d",neg);
	return 0;
}
