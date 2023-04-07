#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],b[10]={0},i,count=0;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		b[a[i]]++;
	for(i=0;i<10;i++)
		if(b[i]>1)
			count++;
	printf("duplicate %d\n",count);
	return 0;
}
