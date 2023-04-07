#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],b[10]={0},i;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		b[a[i]]++;
	for(i=0;i<10;i++)
		if(b[i]!=0)
			printf("Frequency of %d is %d\n",i,b[i]);
	return 0;
}
